#include<iostream>
using namespace std;
int main()
{
	int H,M,MS,RM,S,s,RS;
	 
	 cout<<"ENTER SEC=";
	 cin>>S;
	 cout<<endl;
	 

	 H=S/3600;
	 cout<<"HOURS="<<H<<endl;
	 M=H*3600;
	 RM=S-M;
	 MS=RM/60;
	 cout<<"MINUTES="<<MS<<endl;
	s=MS*60;
	RS=RM-s;
		 cout<<"SECONDS= ="<<RS<<endl;
	
	  
	 return(0);
}
