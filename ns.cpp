#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age:";
	cin>>age;
	if(age<0)
	{
		cout<<"Invalid age:";
	}
	else if(age>=0 && age<=12)
	{
		cout<<"Child:";
	}
		else if(age>=13 && age<=19)
		{
			if(age==13)
			cout<<"Just a teen:";
			else
			cout<<"Teenager:";
		}
	else if(age>=20 && age<=60)
	{
		cout<<"Adult:";
	}
	else
	{
		cout<<"Senior citizen:";
	}
}