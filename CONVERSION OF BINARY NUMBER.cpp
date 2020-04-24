//2. Write a program to convert an integer number into its equivalent binary number.
#include<iostream>
using namespace std;
int main()
     
     {  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
n= n/2; 
a[i]=n%2;    
 
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    

     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
}
