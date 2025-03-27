#include<iostream>
#include<cmath>
using namespace std;
double fact(int num)
{
	double fact,i;
	fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
double power(double x,int num)
{
	int i;
	double power;
	power=1;
	for(i=1;i<=num;i++)
	{
		power=power*x;
	}
	return power;
}
double sin(double x,int n)
{
	int i;
	double sin;
	sin=x/1;
	for(i=1;i<=n;i+=2)
	{
		sin=(-1)*sin+(power(x,i)/fact(i));
	}
	return sin;
}
int main()
{
	double angle;
	int num;
	cout<<"angle=";
	cin>>angle;
	angle=angle*(3.14159/180);
	cout<<"number of terms=";
	cin>>num;
	cout<<"sin("<<angle<<")="<< fabs(sin(angle,num));
	return 0;
	system("pause");
	return 0;
}
	
	

