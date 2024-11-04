#include<iostream>
using namespace std;
int main()
{
	const int days=7;
	double temperature;
	double sum=0.0;
	cout<<"Enter the temperature for 7 days:"<<endl;
	cin>>temperature;
	for(int i=1;i<days;++i)
	{
		cout<<"Days:"<<i<<endl;
		sum+=temperature;
	}
	double average=sum/days;
	cout<<"The average temperature for the week is:"<<average<<"C"<<endl;
}