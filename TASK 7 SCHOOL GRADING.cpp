// PROGRAM TO CALCULATE GRADES
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"MARKS(1_100)=";
	cin>>marks;
	if (marks>=90)
	cout<<"A";
	else if(marks>=80)
	cout<<"B";
	else if(marks>=70)
	cout<<"C";
	else if(marks>=60)
	cout<<"D";
	else if(marks>=50)
	cout<<"E";
	else
	cout<<"YOU ARE FAIL";
	
	return(0);
}
