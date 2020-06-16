#include <iostream>
using namespace std;
int main()
{
   int speed;
   int distance;
   int time_in_hrs;
   double time_in_mins;
   double remainder;
    cout << "Please enter the speed: ";
    cin >> speed;

   cout << "Please enter the total distance traveled: ";
   cin >>distance; 
    time_in_hrs=distance/speed;

	remainder=distance%speed;
	
	time_in_mins=(remainder/speed) *60;
	
	cout<<"MINUTES="<<time_in_mins<<"HOURS="<<time_in_hrs;
	 
	 return(0);
}
