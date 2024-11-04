#include<iostream>
using namespace std;
int main()
{
	float celcius;
	cout<<"Temperature in celcius:";
	cin>>celcius;
	if(celcius<0)
	{
		cout<<"Freeze:";
	}
	else if(celcius>0)
	{
		if(celcius<12)
		{
			cout<<"Cold:";
       	}
    }
		else if(celcius>15)
	{
		  if(celcius<30)
		  {
		cout<<"Warm:";
	     }
	}
	else
	 {
	 	cout<<"Hot:";
	  } 
}