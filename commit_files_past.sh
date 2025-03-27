#!/bin/bash
set -e

# --------------------------
# CONFIGURATION
# --------------------------

# Paths (use Unix-style paths for Git Bash)
ZIP_PATH="/c/Users/maazg/Downloads/PF_Labs.zip"
EXTRACT_DIR="/c/Users/maazg/Downloads/PF_Labs"
REPO_DIR="/c/Users/maazg/Documents/programming-fundamentals"
REPO_BRANCH="main"  # adjust if needed

# --------------------------
# USER INPUT
# --------------------------
read -p "Enter starting date (YYYY-MM-DD HH:MM:SS) [default: now]: " start_date
if [ -z "$start_date" ]; then
    start_date=$(date +"%Y-%m-%d %H:%M:%S")
fi

echo "Commits will be created starting from: $start_date (each commit one day older)"

# --------------------------
# EXTRACT ZIP FILE
# --------------------------
echo "Extracting ZIP file..."
mkdir -p "$EXTRACT_DIR"
unzip -o "$ZIP_PATH" -d "$EXTRACT_DIR"

# --------------------------
# CHANGE TO REPOSITORY
# --------------------------
echo "Changing to repository directory..."
cd "$REPO_DIR"

# Optionally, update your repository (if you wish to integrate remote changes)
git pull origin "$REPO_BRANCH"

# --------------------------
# PROCESS FILES AND CREATE COMMITS
# --------------------------
commit_counter=0
# Loop over each file in the extraction directory (assumes files are in the root of EXTRACT_DIR)
for file in "$EXTRACT_DIR"/*; do
    if [[ -f "$file" ]]; then
        ((commit_counter++))
        filename=$(basename "$file")
        echo "Processing file: $filename"

        # Copy the file into the repository root (or adjust to a subfolder if needed)
        cp "$file" "$REPO_DIR/$filename"
        git add "$filename"

        # Calculate commit date by subtracting commit_counter days from start_date
        commit_date=$(date -d "$start_date - $commit_counter days" +"%Y-%m-%dT%H:%M:%S%z")
        echo "Commit #$commit_counter for $filename will have date: $commit_date"

        # Commit with custom timestamp
        GIT_AUTHOR_DATE="$commit_date" GIT_COMMITTER_DATE="$commit_date" \
        git commit -m "Add $filename on $commit_date"
    fi
done

# --------------------------
# PUSH COMMITS TO REMOTE
# --------------------------
echo "Pushing commits to remote..."
git push origin "$REPO_BRANCH"
echo "All files committed and pushed with past dates."
