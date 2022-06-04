#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int A,A1,A2,A3,A4,A5,A51,B,B1,B2,B3,B4,B12,B22,B32,B42,AF,BF,i,S=0;
cout<<"Enter an integer from 10000-99999"<<endl;
cin>>A; 
A1=A/10000; 
if (A1==0) 
{
cout<<"Error";return 0;
}
A2=(A/1000)%10;
A3=(A/100)%10;
A4=(A/10)%10;
A5=A%10;
 cout<<"\n";
cout<<"You inserted "<<A1<<A2<<A3<<A4<<A5<<endl<<endl;
A51=A1+A5;
cout<<"Then I enter my number"<<endl<<endl;
AF=A2*1000+A3*100+A4*10+A51;
cout<<A2<<A3<<A4<<A51<<endl<<endl;
for (i=1;i<=A1;i++)
{
cout<<"Enter a four-digit integer"<<endl<<endl;
cin>>B; cout<<endl;
B1=B/1000;
B2=(B/100)%10;
B3=(B/10)%10;
B4=B%10;
cout<<"You inserted "<<B1<<B2<<B3<<B4<<endl<<endl<<endl;
B12=9-B1;
B22=9-B2;
B32=9-B3;
B42=9-B4;
cout<<"It is my time to enter "<<endl<<endl;
BF=B12*1000+B22*100+B32*10+B42;
cout<<B12<<B22<<B32<<B42<<endl<<endl<<endl;
cout<<BF<<" + "<<B<<" + "<<S<<" = ";
S=BF+S+B;
cout<<S<<endl<<endl;
}
cout<<"Adding your and my numbers we get the initial number"<<endl<<endl;
cout<<AF<<" + "<<S<<" = ";
cout<<AF+S;
}
