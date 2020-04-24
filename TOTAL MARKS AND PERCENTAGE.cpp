/* Write a program that calculates the total grade for N classroom exercises as a percentage. Use the Decimal
Format class to output the value as a percent. The user should input the value for N followed by each of
the N scores and totals. Calculate the overall percentage (sum of the total points earned divided by the
total points possible) and output it using the Decimal Format class. Sample input and output are shown
below.
How many exercises to input? 3
Score received for exercise 1: 10
Total points possible for exercise 1: 10
Score received for exercise 2: 7
Total points possible for exercise 2: 12
Score received for exercise 3: 5
Total points possible for exercise 3: 8
Your total is 22 out of 30, or 73.33%.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double tm,mo,k,e,sumo,sumt,p;
	
cout<<"THE NUMBER OF EXERCISES TP INPUT=";
cin>>e;
cout<<endl;
for(k=1;k<=e;k++)
{
	cout<<"MARKS OBTAINED=";
	cin>>mo;
	sumo=sumo+mo;
	cout<<endl;
	cout<<"TOTAL MARKS=";
	cin>>tm;
	sumt=sumt+tm;
	cout<<endl;
}

p=(sumo/sumt)*100;
cout<<"PERCENTAGE="<<p;
}
