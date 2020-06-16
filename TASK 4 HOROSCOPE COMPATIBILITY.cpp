#include<iostream>
using namespace std;
int main()
{
	
		int month,day;
	 string astro_sign="";
	
	cout<<" BIRTHDAY DAY=";
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
	
	
	
	 if(astro_sign=="Aries"||"Leo"||"Sagittarius")
	 
	{
     if(astro_sign=="Aries")
      cout<<"COMPATIBLE SIGNS ARE LEO AND SAGITTARIUS";
    else if(astro_sign=="Leo")
       cout<<"COMPATIBLE SIGNS ARE ARIES AND SAGITTARIUS";
    else if(astro_sign=="Sagittarius" )
	 cout<<"COMPATIBLE SIGNS ARE ARIES AND LEO";
    }
      
      
    if(astro_sign=="Taurus"||"Virgo"||"Capricon")  
	{ 
    if(astro_sign=="Taurus")
      cout<<"\nCOMPATIBLE SIGNS ARE Virgo AND Capricon";
    else if(astro_sign=="Virgo")
       cout<<"\nCOMPATIBLE SIGNS ARE Taurus AND Capricon";
    else if(astro_sign=="capricon") 
      cout<<"\nCOMPATIBLE SIGNS ARE taurus AND Virgo";
    }
  
    
    
    if(astro_sign=="Gemini"||"Libra"||"Aquarius")    
  {
   if(astro_sign=="Gemini")
      cout<<"\nCOMPATIBLE SIGNS ARE Libra AND Aquarius";
    else if(astro_sign=="Libra")
       cout<<"\nCOMPATIBLE SIGNS ARE Gemini AND Aquarius";
    else  if(astro_sign=="Aquarius")
      cout<<"\nCOMPATIBLE SIGNS ARE Gemini AND Libra";
    }
    
	 if(astro_sign=="Cancer"||"Scorpio"||"Pisces")
     {
    if(astro_sign=="Cancer")
      cout<<"\nCOMPATIBLE SIGNS ARE Scorpio AND Pisces";
    else if(astro_sign=="Scorpio")
       cout<<"\nCOMPATIBLE SIGNS ARE Cancer AND Pisces";
    else if(astro_sign=="Pisces")
      cout<<"\nCOMPATIBLE SIGNS ARE Cancer AND Scorpio";
   }
	 
    
		return(0);
}
