//4. Write a program to find the sum of the following series: 1+1/2+1/3+………1/45
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	double a,sum=0;
	for(a=1;a<=45;a++)
	{
		
		sum=sum+1/a;
	}
	
	cout<<"SUM OF SERIES="<<sum;
	
	
}
