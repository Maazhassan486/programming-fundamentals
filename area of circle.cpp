#include<iostream>
#include<cmath>
using namespace std;
double area(double r)
{
	r=(3.1415)*pow(r,2);
	return (r);
}
int main()
{
	double r;
	double a;
	cout<<"enter radius";
	cin>>r;
	a=area(r);
	cout<<a<<"is the area";
	return 0;
}
