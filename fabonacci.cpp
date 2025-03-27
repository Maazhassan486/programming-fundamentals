#include<iostream>
using namespace std;
void fabonacci(int limit)
{
	int num1,num2,i;
	if(limit%2==1)
	num1=0;
	num2=1;
	i=0;
	cout<<"fabonacci sequence is =";
	do
	{cout<<num1<<",";
	num1=num1+num2;
	cout<<num2<<",";
	num2=num2+num1;
	i++;
	}
	while(i<(limit/2));
	cout<<endl;
}
int main()
{
	int limit;
	cout<<"enter number of terms=";
	cin>>limit;
	fabonacci(limit);
	return 0;
}

