#include<iostream>
using namespace std;
int main()
{
	int values[3];
	cout<<"Enter three integers:";
	for(int i=0;i<3;i++)
	{
	cin>>values[i];	
	}
	cout<<"Forward values:"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<values[i]<<endl;
	}  
	cout<<"Reverse values:"<<endl; 
	for(int i=2;i>=0;i--)           
	{
		cout<<values[i]<<endl;
	}
}               