/* Write a program that accepts a year written as a four-digit Arabic (ordinary) numeral and outputs the year
written in roman numerals. Important roman numerals are V for 5, X for 10, L for 50, C for 100, d for 500,
and M for 1,000. recall that some numbers are formed by using a kind of subtraction of one roman �digit�;
for example, IV is 4 produced as V minus i, XL is 40, CM is 900, and so on. A few sample years: MCM is
1900, MCML is 1950, MCMLX is 1960, MCMXL is 1940, MCMLXXXiX is 1989. Assume the year is between
1000 and 3000. Your program should include a loop that lets the user repeat this calculation until the user
says she or he is done.*/
#include<iostream>
using namespace std;
int main()
{
int y,i,a,b,c,d;
char C='y';
for(i=1; C=='y'||C=='Y'; i++)
{
cout<<"Enter an year : ";
cin>>y;
a=y/1000;
b=y/100;
b=b%10;
c=y/10;
c=c%10;
d=y%10;
{
switch (a)
{
case 1:
cout<<"M";
break;
case 2:
cout<<"MM";
break;
case 3:
cout<<"MMM";
break;
default:
cout<<"Wrong year.";
goto L;
}
switch (b)
{
case 0:
cout<<"";
break;
case 1:
cout<<"C";
break;
case 2:
cout<<"CC";
break;
case 3:
cout<<"CCC";
break;
case 4:
cout<<"CD";
break;
case 5:
cout<<"D";
break;
case 6:
cout<<"DC";
break;
case 7:
cout<<"DCC";
break;
case 8:
cout<<"DCCC";
break;
case 9:
cout<<"CM";
break;
}
switch (c)
{
case 0:
cout<<"";
break;
case 1:
cout<<"X";
break;
case 2:
cout<<"XX";
break;
case 3:
cout<<"XXX";
break;
case 4:
cout<<"XL";
break;
case 5:
cout<<"L";
break;
case 6:
cout<<"LX";
break;
case 7:
cout<<"LXX";
break;
case 8:
cout<<"LXXX";
break;
case 9:
cout<<"XC";
break;
}
switch (d)
{
case 0:
cout<<"";
break;
case 1:
cout<<"I";
break;
case 2:
cout<<"II";
break;
case 3:
cout<<"III";
break;
case 4:
cout<<"IV";
break;
case 5:
cout<<"V";
break;
case 6:
cout<<"VI";
break;
case 7:
cout<<"VII";
break;
case 8:
cout<<"VIII";
break;
case 9:
cout<<"IX";
break;
}
L:
cout<<"\nDo you want to enter another year(y/n)?";
cin>>C;
}
}
}
