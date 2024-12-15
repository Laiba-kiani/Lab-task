// comment to change
#include<iostream>
using namespace std;
int main()
{
	double budgeted[3][12]=
	{{1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000,1000},
	{150,150,150,150,150,150,150,150,150,150,150,150},
	{100,100,100,100,100,100,100,100,100,100,100,100}};
	cout<<"Budget of the 2024:"<<endl;
	cout<<"itmes\tJan\tfeb\tmar\tapr\tmay\tjune\tjuly\taug\tsep\toct\tnov\tdec:"<<endl;
    string budgetitems[3]={"Rent","Ele","Gas"};
	for(int i=0;i<3;i++)
	{
		cout<<budgetitems[i]<<"\t";
		for(int j=0;j<12;j++)
		{
			cout<<budgeted[i][j]<<"\t";
		}
		cout<<endl;
	}
}
