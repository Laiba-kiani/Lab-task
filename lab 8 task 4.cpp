#include<iostream>
using namespace std;
int main()
{
	int f=1,n;
	cout<<"Enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=1;j++)
		{
			f=f*i;
		}
	}
	cout<<"Fatorical:"<<f<<endl;
}