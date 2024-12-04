#include<iostream>
#include<string>
using namespace std;
int main()
{
	int ticketprice=100;
	int popcornprice=50;
	const int maxusers=10;
	int numofusers;
	string usersnames[maxusers];
	cout<<"How many users want to attend event(maximum 10):"<<endl;
	cin>>numofusers;
	if(numofusers<=10)
	{
		cin.ignore();
	for(int i=0;i<numofusers;i++)
	{
		cout<<"Enter name for users"<<i+1<<":";
		getline(cin,usersnames[i]);
	
	}
	cout<<"user name for events:";
	for(int i=0;i<numofusers;i++)
	{
		cout << "User " << i + 1 << ": " << usersnames[i] << endl;
	}
	int totalcost=0;
	cout<<"Total cost for each user:"<<endl;
	for(int i=0;i<numofusers;i++)
	{
		int usercost=ticketprice+popcornprice;
		totalcost=totalcost+usercost;
		cout <<usersnames[i] << ": Ticket Price = " << ticketprice 
             << ", Popcorn Price = " << popcornprice 
             << ", Total Cost = " << usercost << endl;
		}
		cout<<"totalcost for all users:"<<totalcost<<endl;
	}
}