#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	cout<<"Enter a positive integer:";
	cin>>n;
	cout<<"The odd number between 1 and"<<n<<"is "<<endl;
	while(i<=n)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
		i++;
    }
}
		
	
	
	