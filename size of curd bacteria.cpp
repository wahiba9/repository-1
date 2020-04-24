 /*The Fibonacci numbers Fn are defined as follows. F0 is 1, F1 is 1, and
Fi+2 = Fi + Fi+1
i = 0, 1, 2, …. in other words, each number is the sum of the previous two numbers. The first few Fibonacci
numbers are 1, 1, 2, 3, 5, and 8. One place that these numbers occur is as certain population growth rates.
if a population has no deaths, then the series shows the size of the population after each time period. it
takes an organism two time periods to mature to reproducing age, and then the organism reproduces
once every time period. The formula applies most straightforwardly to asexual reproduction at a rate of
one offspring per time period.
Assume that the green crud population grows at this rate and has a time period of 5 days. Hence, if a
green crud population starts out as 10 pounds of crud, then in 5 days there is still 10 pounds of crud; in
10 days there is 20 pounds of crud, in 15 days 30 pounds, in 20 days 50 pounds, and so forth.
Write a program that takes both the initial size of a green crud population (in pounds) and a few days as
input, and that outputs the number of pounds of green crud after that many days. Assume that the
population size is the same for 4 days and then increases every fifth day. Your program should allow the
user to repeat this calculation as often as desired.   */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,d,is,ts,p,k;
	char ch='Y'; 
	for(a=1;ch=='Y';a++)
	{
                   cout<<"ENTER THE INTIAL SIZE = ";
	   cin>>is;
	   cout<<endl;
	   cout<<"ENTER THE NUMBER OF DAYS = ";
	   cin>>d;
	   cout<<endl;
	   if(d%5==0)	
	   p=d*2;
	   else
	   {
	   
	   k=d/5;
	   p=k*5*2;
	
	   }
	   ts=is+p;
	   
	   cout<<"THE TOTAL SIZE = "<<ts<<endl;
	   cout<<"DO YOU WANT TO CONTINUE (Y/N) ? ";
	   cin>>ch;
	   
	
	    	
	}
	
}
