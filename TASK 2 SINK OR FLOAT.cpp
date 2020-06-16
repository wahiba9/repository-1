#include<iostream>
using namespace std;
int main()
{
double F,V;
double weight,radius,y = 62.4;
cout<<"WEIGHT(in pounds)=";
cin>>weight;
cout<<"RADIUS(in feet)=";
cin>>radius;
 V=(1.333*3.14*radius*radius*radius);
 F=V*y;
 cout<<"buoyant force="<<F;
 if(F>=weight)
 {
 	cout<<"\nOBJECT WILL FLOAT";
 }
 else
{
cout<<"\nOBJECT WILL SINK";
 }


	return(0);
}
