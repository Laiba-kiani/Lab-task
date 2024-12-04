#include<iostream>
using namespace std;
int main()
{
	int entryfee=30;
	int snackcost=100;
	int maxstudents=15;
	int numstudents;
	string studentsname[maxstudents];
	cout<<"How many students will attend the game night(maximum 15):";
	cin>>numstudents;
	if(numstudents<=10)
	{
     cin.ignore();
	for(int i=0;i<numstudents;i++)
	{
	cout<<"Enter number for students"<<i+1<<":"<<endl;
	getline(cin,studentsname[i]);	
	}
	cout<<"Users name for the event:"<<endl;
	for(int i=0;i<numstudents;i++)
	{
		cout<<"users"<<i+1<<studentsname[i]<<endl;
	}
	int totalcost=0;
	cout<<"total cost for each student:"<<endl;
	for(int i=0;i<numstudents;i++)
	{
		int studentcost=entryfee+snackcost;
		totalcost+=studentcost;
		cout<<studentsname[i]<<"entry fee="<<entryfee<<",snackcost="
		<<snackcost<<",studentcost="<<studentcost<<endl;
	}
	cout<<"total cost for all students:"<<endl;
}
}