//3. Write a program to find out the factorial of an integer.
#include<iostream>
using namespace std;
int main()
     
     { 
          int number,a,product=1;
          cout<<"NUMBER=";
          cin>>number;
          for(a=1;a<=number;a++)
          {
          	product=product*a;
		  }
		  
		  cout<<"FACTORIAL="<<product;
		  
          
     }
