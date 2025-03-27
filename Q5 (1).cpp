#include<iostream>
using namespace std;
int main()
{
	int Row=3;
	int Col=4;
	cout<<"This is the first 2D Array : "<<endl; 
	int arr[3][4] = {{1,2,3,2},{5,9,1,2},{5,1,7,9}};
	for (int x=0; x<Row; x++) 
	{
    for (int y=0; y<Col; y++)
    {
        cout<<arr[x][y]<<" ";
}
cout<<endl;
}

cout<<endl;
cout<<"This is the second 2D Array : "<<endl;
    int b[3][4] = {{1,2},{5,9,1}};
for (int x=0; x<Row; x++) 
	{
    for (int y=0; y<Col; y++)
    {
        cout<<b[x][y]<<" ";
}
cout<<endl;
}

}
