#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("abc.txt", ios::in);

	char ch;
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin.get(ch);
			cout << ch;
		}
		fin.close();
	}
	else
		cout << "Unable to open";
	
	
	ofstream fout;
	string line;
	fout.open("out.txt", ios::out);
	if (fout.is_open())
	{
		fout << "hi I'm uzair\nNice to meet you";
		fout.close();
	}
	else
		cout << "unable to open";

	return 0;
}
