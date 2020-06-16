//if days are from ,on to fri then rate is 0.40 and time bt 6pm to 8am then its 0.25 and if its sun and sat then charges are 0.15
#include<iostream>
using namespace std;
int main()
{
	
	int time,length_of_call;
	char weekday,a,b;
	cout<<"WEEKDAY=";
	cin>>weekday; 
	cout<<"TIME=";
	cin>>time;

	if (((a=='M' || a=='m')&&(b=='o' || b=='O'))||((a=='T' || a=='t')&&(b=='u' || b=='U'))||((a=='w' || a=='W')&&(b=='E' || b=='e'))||((a=='T' || a=='t')&&(b=='h' || b=='H'))||((a=='f' || a=='F')&&(b=='r' || b=='R')))
	{
			if(time>=8.0 && time<=18.0 )
				cout<<"COST="<<(length_of_call*0.40);
			else
				cout<<"COST="<<(length_of_call*0.25);
	}
    else if (((a=='s' || a=='S')&&(b=='a' || b=='A'))||((a=='s' || a=='S')&&(b=='u' || b=='U')))
	cout<<"COST="<<(length_of_call*0.15);

    else
	
		cout<<"INVALID TIME";
	
	return(0);

}
