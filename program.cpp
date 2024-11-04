#include<iostream>
using namespace std;
int main()
{
	int count,square;
	cout<<"Enter a count:";
	cin>>count;
	for(int i=1;i<=count;i++)
	{
	if(i%2==0)
	{
	square=i*i;
	cout<<"The square of"<<i<< "is" <<square<<endl;
	}
	}
	return 0;
}