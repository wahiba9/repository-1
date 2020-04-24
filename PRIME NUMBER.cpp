//8. Write a program to calculate whether the number entered is prime or not.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int count=0,a,number;
	cout<<"NUMBBER=";
	cin>>number;
	
	for(a=2;a<=(number);a++)
	{
		if(number%a==0)
    
		count=count+1;
		
    }
		if(count==1)
		cout<<number<<" IS A PRIME NUMBER";
		else
		cout<<number<<" IS NOT A PRIME NUMBER";
	
}
