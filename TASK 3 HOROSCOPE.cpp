#include<iostream>
using namespace std;
int main()
{
	int month,day;
	 string astro_sign="";
	
	cout<<" BIRTHDAY DAY";
	cin>>day;
	cout<<"BIRTHDAY MONTH(1_12)=";
	cin>>month;
          
  if (month == 1){ 
        if (day < 20) 
        astro_sign = "Capricorn"; 
        else
        astro_sign = "aquarius"; 
    } 
          
    else if (month == 2){ 
        if (day < 19) 
        astro_sign = "Aquarius"; 
        else
        astro_sign = "pisces"; 
    } 
          
    else if(month == 3){ 
        if (day < 21)  
        astro_sign = "Pisces"; 
        else
        astro_sign = "aries"; 
    } 
    else if (month == 4){ 
        if (day < 20) 
        astro_sign = "Aries"; 
        else
        astro_sign = "taurus"; 
    } 
          
    else if (month == 5){ 
        if (day < 21) 
        astro_sign = "Taurus"; 
        else
        astro_sign = "gemini"; 
    } 
          
    else if( month == 6){ 
        if (day < 21) 
        astro_sign = "Gemini"; 
        else
        astro_sign = "cancer"; 
    } 
          
    else if (month == 7){ 
        if (day < 23) 
        astro_sign = "Cancer"; 
        else
        astro_sign = "leo"; 
    } 
          
    else if( month == 8){ 
        if (day < 23)  
        astro_sign = "Leo"; 
        else
        astro_sign = "virgo"; 
    } 
          
    else if (month == 9){ 
        if (day < 23) 
        astro_sign = "Virgo"; 
        else
        astro_sign = "libra"; 
    } 
          
    else if (month == 10){ 
        if (day < 23) 
        astro_sign = "Libra"; 
        else
        astro_sign = "scorpio"; 
    } 
          
    else if (month == 11){ 
        if (day < 22) 
        astro_sign = "scorpio"; 
        else
        astro_sign = "sagittarius"; 
    } 
    else if (month == 12){ 
          
        if (day < 22) 
        astro_sign = "Sagittarius"; 
        else
        astro_sign ="capricorn"; 
    }
    cout<<astro_sign; 
	return(0);
}
