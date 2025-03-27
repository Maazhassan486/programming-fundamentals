#include<iostream>
#include<cmath>
using namespace std;
double windchill(double speed,double temperature)
{
	double windchill;
	windchill=35.74+0.6215*temperature-(35.75*pow(speed,0.16))+0.4275*temperature;
	cout<<"windchill factor="<<windchill<<endl;
}
double input()
{
	double speed;
	double temperature;
	cout<<"enter wind speed in miles per hour";
	cin>>speed;
	cout<<"enter the temperature in degree farenheit";
	cin>>temperature;
	windchill(speed,temperature);
}
int main()
{
	input();
	return 0;
}

