//The Babylonian algorithm to compute the square root of a positive number n is as follows:
//1. Make a guess at the answer (you can pick n/2 as your initial guess).
//2. Compute r = n / guess.
//3. Set guess = (guess +r) / 2.
//4. Go back to step 2 until the last two guess values are within 1% of each other.
//Write a program that inputs a double for n, iterates through the Babylonian algorithm until the guess is
//within 1% of the previous guess and outputs the answer as a double to two decimal places. Your answer
//should be accurate even for large values of n.
//HINT: Use FOR LOOP and set its range so that loop repeats 5 times
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
	int r,n,g,sg,k;
	cout<<"NUMBER=";
	cin>>n;
	g=n/2;
	
	for(k=1;k<=20;k++)
	{
		r=n/g;
		sg=(g+r)/2;
		
	}
	cout<<"SQUARE ROOT OF "<<n<<"="<<sg;	
	
}
