#include<iostream>
using namespace std;
int main()
{
	int choice;
	do
	{
		cout<<"/nMenu:/n";
	    cout<<"1.Print Hello/n:";
	    cout<<"2.Print World/n:";
	    cout<<"3.Exit/n:";
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice)
		{
		case1:
		cout<<"Hello:"<<endl;
		break;
		case2:
		cout<<"World:"<<endl;
		break;
		case3:
		cout<<"Exit program:"<<endl;
		break;
		defualt:
		cout<<"Invalid choice:";
		break;
	    }
	}
	while(choice<=3);
}