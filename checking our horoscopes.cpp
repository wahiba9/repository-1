check ou thye horoscope
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
        astro_sign = "Aquarius";
    }

    else if (month == 2){
        if (day < 19)
        astro_sign = "Aquarius";
        else
        astro_sign = "Pisces";
    }

    else if(month == 3){
        if (day < 21)
        astro_sign = "Pisces";
        else
        astro_sign = "Aries";
    }
    else if (month == 4){
        if (day < 20)
        astro_sign = "Aries";
        else
        astro_sign = "Taurus";
    }

    else if (month == 5){
        if (day < 21)
        astro_sign = "Taurus";
        else
        astro_sign = "Gemini";
    }

    else if( month == 6){
        if (day < 21)
        astro_sign = "Gemini";
        else
        astro_sign = "Cancer";
    }

    else if (month == 7){
        if (day < 23)
        astro_sign = "Cancer";
        else
        astro_sign = "Leo";
    }

    else if( month == 8){
        if (day < 23)
        astro_sign = "Leo";
        else
        astro_sign = "Virgo";
    }

    else if (month == 9){
        if (day < 23)
        astro_sign = "Virgo";
        else
        astro_sign = "Libra";
    }

    else if (month == 10){
        if (day < 23)
        astro_sign = "Libra";
        else
        astro_sign = "Scorpio";
    }

    else if (month == 11){
        if (day < 22)
        astro_sign = "Scorpio";
        else
        astro_sign = "Sagittarius";
    }
    else if (month == 12){

        if (day < 22)
        astro_sign = "Sagittarius";
        else
        astro_sign ="Capricorn";
    }
    cout<<astro_sign<<"\n";



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
      cout<<"COMPATIBLE SIGNS ARE Virgo AND Capricon";
    else if(astro_sign=="Virgo")
       cout<<"COMPATIBLE SIGNS ARE Taurus AND Capricon";
    else if(astro_sign=="capricon")
      cout<<"COMPATIBLE SIGNS ARE taurus AND Virgo";
    }


    if(astro_sign=="Gemini"||"Libra"||"Aquarius")

   {
   if(astro_sign=="Gemini")
      cout<<"COMPATIBLE SIGNS ARE Libra AND Aquarius";
    else if(astro_sign=="Libra")
       cout<<"COMPATIBLE SIGNS ARE Gemini AND Aquarius";
    else  if(astro_sign=="Aquarius")
      cout<<"COMPATIBLE SIGNS ARE Gemini AND Libra";
    }


     if(astro_sign=="Cancer"||"Scorpio"||"Pisces")
     {
    if(astro_sign=="Cancer")
      cout<<"COMPATIBLE SIGNS ARE Scorpio AND Pisces";
    else if(astro_sign=="Scorpio")
       cout<<"COMPATIBLE SIGNS ARE Cancer AND Pisces";
    else if(astro_sign=="Pisces")
      cout<<"COMPATIBLE SIGNS ARE Cancer AND Scorpio";
   }
return(0);
}
