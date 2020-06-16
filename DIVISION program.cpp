//
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int dividend,divisor,quotient,remainder;
	
	cout<<"DIVISOR=";
	cin>>divisor;
	cout<<"DIVIDEND=";
	cin>>dividend;
	
	quotient=dividend/divisor;
	
	cout<<"QUOTIENT="<<quotient;
	
	remainder=dividend%divisor;
	
	cout<<"REMAINDER="<<remainder;
	
	
	
	 return(0);
}
