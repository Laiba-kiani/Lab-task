// comment
#include<iostream>
using namespace std;
struct Contact{
	string name;
	string address;
	string mobilenumber;
};
int main()
{
	 Contact contacts[10]={{"Laiba","Address 1","955875456789"},{"Sana","Address 2","9674454"},
	 {"Saman","Address 3","43676466"},{"Abeera","Address 4","946577677"},
	 {"Rabia","Address 5","465456776"},{"Wardah","Address 6","644578876"},
	 {"Noor","Address 7","654344656"},{"Alisha","Address 8","9456776556"},
	 {"Maryam","Address 9","545678876"},{"Saba","Address 10","45677656"}};
	 string search;
	 cout<<"Starting letters of the Name to be searched:";
	 cin>>search;
	 cout<<"Contacts search:";
	 for(int i=0;i<10;i++)
	 {
	 	 if(contacts[i].name.substr(0,search.length())
		  .compare(0,search.length(),search,0,search.length())==0)
		  cout<<"Name:"<<contacts[i].name<<",Address:"<<contacts<<
		  ",Mobilenumber:"<<contacts[i].mobilenumber;
	}
}
