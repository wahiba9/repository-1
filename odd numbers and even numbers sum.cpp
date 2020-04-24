//6. Write a program to calculate the sum of the first 10 odd numbers and first 10 even numbers.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
    int a,even=0,odd=0;

    {
	
	for(a=1;a<=20;a++)
	{
	    if(a%2==1)	
	  odd=odd+a;
	}
	cout<<"SUM OF FIRST TEN ODD NUMBER="<<odd<<endl;
    }
    
	
	for(a=1;a<=20;a++)
	{
		if(a%2==0)
		even=even+a;
	}
	cout<<"SUM OF FIRST TEN EVEN NUMBERS="<<even<<endl;
	
	
}
