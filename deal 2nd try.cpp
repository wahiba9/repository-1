#include<iostream>
using namespace std;
int main()
{
int d,td,p,tp;
cout<<"\n\n OUR DEALS ARE AS FOLLOWING ENJOY YOURSELF- . - ";
cout<<"\n\n1. Chicken Pc, 1 Reg. Drink, 1 Reg. Fries \nPRICE=295 ";
cout<<"\n\n2. CHICKEN COMBO ,Zinger burger, 1 piece chicken, 1 reg Fries, 1 reg soft drink\nprice=567 ";
cout<<"\n\n3. ZINGERATHA, Zingeratha + 1 regular drink,4 Zinger strips, 1 dinner roll, 1 Dip sauce, 1 reg drink\nPRICE=1240      ";
cout<<"\n\n4. RICE AND SPICE,Rice and Spice + 1 regular drink,1 Value burger, 1 Reg. Drink, 1 Reg. Fries\nPRICE=1000  ";
cout<<"\n\n5. KRUNCH BURGER,Krunch Burger + 1 regular drink ,4 Zinger strips, 1 dinner roll, 1 Dip sauce\nPRICE=1500      ";
cout<<"\n\nDeal Number : ";
cin>>d;
switch (d)
{
case 1:
p=395;
break;
case 2:
p=250;
break;
case 3:
p=295;
break;
case 4:
p=295;
break;
case 5:
p=250;
break;
}
cout<<"\nPrice = "<<p;
cout<<"\n\nDeals Quantity : ";
cin>>td;
switch (td)
{
case 1:
tp=p*1;
break;
case 2:
tp=p*2;
break;
case 3:
tp=p*3;
break;
case 4:
tp=p*4;
break;

}
cout<<"\nTotal Price = "<<tp;
return(0);
}
