//7. Write a program to calculate the square and cube of first ten even numbers
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
    int a,square,cube;
    	
	for(a=2;a<=20;a=a+2)
	{
		square=a*a;
		cube=a*a*a;
		cout<<"SQUARE="<<square<<endl;
	    cout<<"CUBE="<<cube<<endl;
	
	}
	
	
}
