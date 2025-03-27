#include<iostream>
using namespace std;
int greatest(int a,int b,int c)
{
	int greatest;
	if(a>b&&a>c)
	return a;
	if(b>a&&b>c)
	return b;
	if(c>a&&c>b)
	return c;
	
}
int main()
{
	int e,f,g,h;
	cout<<"enter first number";
	cin>>e;
	
	cout<<"enter second number";                                                                                                                                                                                                                                                  
	cin>>f;
	cout<<"enter third number";
	cin>>g;
	h=greatest(e,f,g);
	cout<<h<<"is greatest";
	return 0;
}
