/* You are running a courier agency. The weight of a parcel determines the number of stamps that will be
needed to send that parcel. For each kilogram, a stamp of $2 is needed. Also, the courier company charges
an additional rate depending on where the courier must be delivered. The charges are $20 for delivery
within the city of posting, and $40 for delivery anywhere else in the country. Write a computer program
to calculate and display the total cost of parcel depending on the weight and delivery location of the
parcel.*/
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
   int w,tw;
   char ch;
   cout<<"ENETER THE WEIGHT OF PARCEL=";
   cin>>w;
   cout<<"ENTER THE DILIVERY LOCATION IF ITS WITHIN THE COUNTRY ENETR C =";
   cin>>ch;
   
   if(ch=='C')	
   {
    tw=(w*2)+20;
   }
   else
   {
   
   tw=(w*2)+40;
   }	
   cout<<"THE TOTAL CHARGES OF PARCEL = "<<tw;
}
















	
