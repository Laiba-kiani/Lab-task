#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Enter the size of matix:";
	cin>>N;
	int matix[N][N];
	cout<<"Enter the elements of matix:";
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cin>>matix[i][j];
		}
		cout<<endl;
	}
	cout<<"Transope element:";
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<matix[j][i]<<endl;
		}
	}
}