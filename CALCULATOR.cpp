//PROGRAM TO MAKE A CALCULATOR
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,sum;
	int z;
	cout<<"NUMBER 1=";
	cin>>a;
	cout<<"NUMBER 2-";	
	cin>>b;
	cout<<"\npress 1 to perform addition";
	cout<<"\npress 2 to perform subtraction";
	cout<<"\npress 3 to perform division";
	cout<<"\npress 4 to perform mutipliction ";
    cout<<"\npress 5 to have remainder";
    cout<<"\npress 6 to perform square root of a";
    cout<<"\npress 7 to perform square root of b";
    cout<<"\npress 8 to perform log of a";
    cout<<"\npress 9 to perform lof og b";
    cout<<"\npress 10 to perform square of a";
    cout<<"\npress 10 to perform square of b";
    
    cout<<"\nENTER NO TO PERFORM THE OPERATION(1_11)=";
    cin>>z;
    switch(z)
    {
    case 1:
    	sum=a+b;
    	cout<<"SUM="<<sum;
    	break;

    case 2:
    	cout<<a-b<<endl;
        break;
    case 3:
    	a/b;
    	break;
    case 4:
    	a*b;
    	break;
    case 5:
    	a%b;
    	break;
    case 6:
    	sqrt(a);
    	break;
    case 7:
    	sqrt(b);
    	break;
    case 8:
    	log(a);
    	break;
    case 9:
    	log(b);
    	break;
    case 10:
    	a*a;
		break;
	case 11:
	   b*b;
	   break;
	default:
	cout<<"THIS OPERATION IS NOT INCLUDED IN THIS CALCULATOR";	
	
}
	return(0);
}
