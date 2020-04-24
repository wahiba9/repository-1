//1. Write a program to print the multiplication table of a number entered from the keyboard.
#include<iostream>
using namespace std;
int main()
{
	int k,number;
	cout<<"NUMBER=";
	cin>>number;
	
	for(k=1;k<=10;k++)
	{
		cout<<number<<"*"<<k<<"="<<number*k;
	
	cout<<endl;
    }  
}

