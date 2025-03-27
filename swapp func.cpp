#include<iostream>
using namespace std;
void swap(int&num1,int&num2)
{
	int num3;
	cout<<endl;
	cout<<endl;
	num3=num1;
	num1=num2;
	num2=num3;
}
int main()
{
	int num1;
	int num2;
	cout<<"enter number 1:";
	cin>>num1;
	cout<<"enter number 2:";
	cin>>num2;
	swap(num1,num2);
	cout<<"***after swapping***"<<endl<<endl;
	cout<<"number1="<<num1<<endl;
	cout<<"number2="<<num2<<endl;
	return 0;
}

