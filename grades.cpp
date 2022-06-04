//Upgrade using limitations

#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int j;
	char sub [5][7];
	string Sub="Sub";
	char fill='*';
	int temp[100], dtemp=0;
	const int midID=30,siwID=25,finID=45;
	int examGrades[6][4];
const 	string exams[4]={"MID","SIW","FIN","AVR"};
	int i,z;
	string subjects[5];
	cout<<"Please enter your subjects:\n";
	for (i=0;i<5;i++)
	{
		cin>>subjects[i];
	}
	cout<<"Enter your exam grades:\n"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<subjects[i]<<":"<<endl;
		for (z=0;z<4;z++)
		{
			if (z==3)
			{
				examGrades[i][z]=((examGrades[i][z-3]*midID)/100)+((examGrades[i][z-2]*siwID)/100)+((examGrades[i][z-1]*finID)/100);
				cout<<exams[z]<<": "<<examGrades[i][z]<<endl<<endl;
			}
			else
			{
			cout<<exams[z]<<": ";
			cin>>examGrades[i][z];
	    	}
		}
	}
    for(i=0;i<5;i++)
    {
    	for (z=0;subjects[i][z]!='\0';)
    	{
    		++z;
    		for (j=0;j<7;j++)
    		{
    			sub[i][j]=subjects[i][j];
			}
		}
	}
cout<<Sub<<"\t\t"<<exams[0]<<"\t"<<exams[1]<<"\t"<<exams[2]<<"\t"<<exams[3]<<"\t"<<endl;
for (i=0;i<5;i++)
{
	for (j=0;j<7;j++)
	{
	cout<<sub[i][j];
	}
	cout<<"\t\t";
	for (z=0;z<4;z++)
	{
		cout<<examGrades[i][z]<<"\t";
	}
	cout<<endl;
}
}
