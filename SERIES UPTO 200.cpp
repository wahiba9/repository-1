/*Write a program to generate a Fibonacci series up till 200. Here are the first few terms of the series:
1 1 2 3 5 8 13 21 34 55
Each term is found by adding the two previous ones: 1+1 is
2, 1+2 is 3, 2+3 is 5, 3+5 is 8, and so on */
#include<iostream>
using namespace std;
int main()
{
int i,a=1,k=1;
cout<<k<<"   "<<a<<"   ";
for(i=1;k<=200;i++)
{
k=k+a;
a=(k-a);
cout<<k<<"  " ;
}
}
