#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float a,b,c,D,x1,x2,x;
int i;
for (i=1;i++;)
{	
cout<<"Enter properties of an equation ax2+bx+c respectievely\na=";
cin>>a;
if (a==0)
{
	cout<<"Error";return 0;
}
cout<<"b=";
cin>>b;
cout<<"c=";
cin>>c;
D=pow(b,2)-(4*a*c);
cout<<"\n"<<endl;
cout<<"D="<<D<<"\n"<<endl;
if (D>0)
{
	cout<<"D>0\n"<<endl;
	x1=((-1*b)-(sqrt(D)))/(2*a);
	cout<<"x1="<<x1<<endl;
	x2=((-1*b)+(sqrt(D)))/(2*a);
	cout<<"x2="<<x2<<endl<<endl;
}
if (D==0)
{
	x=(-1*b)/(2*a);
	cout<<"x="<<x<<endl<<endl;
}
if (D<0)
{
  cout<<"D<0\nThe function is meaningless"<<endl<<endl;
}
  cout<<"Press a key to continue..."<<endl<<endl;
  cout<<"0-Exit\n1-continue"<<endl<<endl;
  cin>>i;
  switch (i)
  {
  	case 0: cout<<"Good bye!";break;
  	case 1: cout<<endl;
  }
}
  }



