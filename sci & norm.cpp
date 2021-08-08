#include<iostream>
#include<cmath>
using namespace std;
//scientific calculator and normal calculator
int sci()
{
	long long int c;
	cout<<"\n\t \tScientific mode "<<endl;
	cout<<"\nChoose your operation [sin, cos, tan, sqrt, power] "<<endl; //important trigonometric function
	string b;
	cin>>b;
	cout<<"\n\t----------if you entered wrong don't worry you will be redirected -----------"<<endl;
	cout<<"\nEnter the number ";
	cin>>c;
	if(b=="sin")
	{
	    cout<<sin(c);
	}
	else if(b=="cos")
	{
	    cout<<cos(c);
	}
	else if(b=="tan")
	{
	     cout<<tan(c);
	}
	else if(b=="power")
	{
	    cout<<c*c;
	}
	else if (b=="sqrt")
	{
		int u;
	    cout<<sqrt(c);
	}
	else
	{
	    cout<<"\t \t please try again"<<endl;
	    cout<<"\t \t ------------------------- "<<endl;
	    sci();
	}
}
int norm()
{
    int q,r;
    cout<<"\t \t ------- Normal mode ------------ "<<endl;
    cout<<"choose your operation [ + , - , * , /]"<<endl;
    char p;
    cin>>p;
    cout<<"enter the first number "<<endl;
    cin>>q;
    cout<<"enter the second number "<<endl;
    cin>>r;
    if(p == '+')
    {
        cout<<q<<"+"<<r<<"="<<q+r;
    }
    else if(p=='-')
    {
        cout<<q<<"-"<<r<<"="<<q-r;
    }
    else if(p=='*')
    {
        cout<<q<<"*"<<r<<"="<<q*r;
    }
    else if( p== '/')
    {
        cout<<q<<"/"<<r<<"="<<q/r;
    }
    else
    {
        cout<<"Invalid character "<<endl;
        cout<<"\n\t \t ------ Try again ------"<<endl;
        cout<<"\n\n";
        norm();
    }
}
int main()
{
	string a;
	cout<<"\t \t \tWelcome "<<endl;
	cout<<"\t ------------------------------------ "<<endl<<endl;
	cout<<"Please enter the calculator mode (sci / norm)"<<endl;
	cin>>a;
	if(a=="sci")
	{
		sci();
	}
	else if(a=="norm")
	{
		norm();
	}
	else
	{
	    cout<<"Invalid!";
	}
}
