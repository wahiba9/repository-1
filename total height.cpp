//program of height inches and additional inches

#include <iostream>

using namespace std;

int main()
{
   int height_in_feet;
   int add_inches;
   int rem_feet;
   int rem_inches;
   int Value;
   
   cout<<" HEIGHT =";
   cin>>height_in_feet;
   cout<<" ADDITIONAL INCHES=";
   cin>>add_inches;
   rem_feet=height_in_feet -5;
   rem_inches=rem_feet*12;
   Value=110+(rem_inches*5)+(add_inches*5);
   cout<<"your WEIGHT ="<<Value;
   
  
  
   return 0;
}
