//2. Write a program to convert an integer number into its equivalent binary number
#include<iostream>
using namespace std;
int main()
     
     {  
int number,remainder,binary=0,i=1;
cout<<"NUMBER=";
cin>>number;
while(number!=0)
{
	remainder=number%2;
	number=number/2;
	binary=binary+(remainder*i);
	i=i*10;
}
cout<<"BINARY="<<binary;
}
