#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char op;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	cout<<"Enter the operations:";
	cin>>op;
	switch(op)
	{
		case'+':
		cout<<"result:"<<n1+n2;
		break;
		case'-':
		cout<<"result:"<<n1-n2;
		break;
		case'*':
		cout<<"result:"<<n1*n2;
		break;
		case'/':
			if(n2!=0)
		cout<<"result:"<<n1/n2;
		else
		cout<<"Error!Division by zero:";
		break;
		default:
		cout<<"Invalid operation:";
		break;
	}
}