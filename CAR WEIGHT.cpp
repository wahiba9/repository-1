// WEIGHT ON EARTH AND MOON WITH FORMULAS
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{    
  double car_weight,weight_on_earth,weight_on_moon;
  char ch;
   cout<<"CAR WEIGHT=";
   cin>>car_weight;
   cout<<"do yo want to find weight of earth(Y)";
   cin>>ch;
	  if(ch='y')
  	{
  weight_on_earth=car_weight*9.81;
  
  cout<<"WEIGHT ON EARTH="<<weight_on_earth<<"N"<<endl;
   }
  else
  {
  weight_on_moon=(car_weight*9.81)/6;
  
  cout<<"WEIGHT ON MOON="<<weight_on_moon<<"N";
  }
  
}
