#include  <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main ()
{ 
    int loop, subloop;
	for (loop=1;loop++;)
	{
	int i,n;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"Welcome to the program which will calculates the root of polynomial equations"<<endl;
	cout<<"It uses the Newthon's method to find the root of an equation \naccording to certain point"<<endl<<endl;
	cout<<"Transform your equation into expanded explicit form like ax^n-1+bx^n-2...\nAnd Enter the data of your equation"<<endl;
	cout<<endl;
	cout<<"Enter the degree of an equation: "; cin>>n;
	float a[n+1], sum=0,x,sumd=0,root;
	cout<<"Then enter the coefficients of an equation.\n\n You wil have to enter as many coefficients as the degree"<<endl;
	for (i=n;i>=0;i--)
	{
		cout<<"For x^"<<i<<": "; cin>>a[i];
	}
	cout<<"So the equation is"<<endl;
	for (i=n;i>=0;i--)
	{
		cout<<a[i]<<"x^"<<i<<" ";
			if (i==0)
		{
			break;
		}
		if (a[i]>=0)
		{
			cout<<" + ";
		}
		if (a[i]<0 && a[i-1]>=0)
		{
			cout<<" + ";
		}
		if (i==0)
		{
			break;
		}
	}
	cout<<" = 0"<<endl;
	for (subloop=1;subloop++;)
	{
	cout<<"Please enter the value of Xo: "; cin>>x;
	for (i=n;i>=0;i--)
	{
		sum=sum + a[i]*pow(x,i);
	}
	cout<<"f(x)="<<sum<<endl;
		for (i=n;i>=0;i--)
	{
		sumd=sumd + (a[i]*i)*(pow(x,i-1));
	}
	cout<<"f'(x)="<<sumd<<endl;
	root=x-(sum/sumd);
	cout<<"Root of an equation is = "<<root<<endl<<endl;
	cout<<"Press q to quit and other letter to continue\nPress r-to change the value of Xo"<<endl;
	char button;
	cin>>button;
	if (button=='q')
	{
		loop=0;
	}
     if (button=='r')
	{
		continue;
	}
	else 
	{
		subloop=0;
	}
}

}
	
	
	
	
	
}
