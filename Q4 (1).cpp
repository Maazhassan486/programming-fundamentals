#include <iostream>
using namespace std;
const int size=10;
void selectionSort(int array[])
{
	int i,j,max,max2;
	for(i=0;i<(size-1);i++)
	{
		max2=i;
		max=array[i];

      for(j=i+1;j<(size);j++) 
	  {
		  if(max<array[j]) 
		  {
			  max2=j; 
			  max=array[j];
		  }
	  }
	  int temp=array[i] ;
	  array[i]=array[max2];  
	  array[max2]=temp;
	}
	for(int i=0;i<size;i++)
	cout<<array[i]<<" ";
}

int main()
{

	int a[size];
	cout<<"Enter An array of 10 Elements : ";
	for(int i=0;i<size;i++)
	cin>>a[i]; 
    selectionSort(a);                      
}
