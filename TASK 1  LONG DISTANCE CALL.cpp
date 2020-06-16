#include<iostream>
using namespace std;
int main()
{
	double COST;	
	int time,length_of_call;
	char weekday;
	cout<<"WEEKDAY=";
	cin>>weekday; 
	cout<<"TIME=";
	cin>>time;
    
	
	if(weekday=='M'||'T'||'W'||'T'||'F')
	{
		if(time==8 && time==18 )
		{
			COST=length_of_call*0.40;
		
		}
			else
			{
				COST=length_of_call*0.25;
			}
	}
	else if(weekday=='S')
	{
	COST=length_of_call*0.15;	
	}
	else
	{
		cout<<"NOT A VALID WEEKDAY";
	}
     cout<<"COST="<<COST;    
	return(0);
}
