// coment changes
#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter exam score (out of 100):";
	cin>>score;
	if(score>=90)
	{
		cout<<"Grade:A";
	}
	else if(score>=80 && score<=89)
	{
		if(score>=85)
		{
			cout<<"Grade:B+";
		}
		else
		{
			cout<<"Grade:B";
		}
	}
    else if(score>=70 && score<=79)
	{
		if(score>=75)
		{
			cout<<"Grade:C+";
		}
		else
		{
			cout<<"Grade:C";
		}
	}
		else if(score>=60 && score<=69)
		{
			cout<<"Grade:D";
		}
	else
	{
		cout<<"Grade:F";
	}
}
