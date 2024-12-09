#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("UserLog.txt");
	outfile<<"User activation Log :";
	outfile<<"User 'john' Logged in.";
	outfile<<"User 'Jane' Accessed the dashboard";
	outfile<<"User 'Bob' Performed the file operation";
	outfile.close();
	cout<<"User activation Log :"<<endl;
	cout<<"User 'john' Logged in."<<endl;
	cout<<"User 'Jane' Accessed the dashboard"<<endl;
	cout<<"User 'Bob' Performed the file operation"<<endl;
	
}