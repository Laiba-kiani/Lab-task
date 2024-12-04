#include<iostream>
using namespace std;
struct Currency{
	string type;
	double amount;
};
double converttorupees(double dollars,double rateofdollars)
{
	return dollars*rateofdollars;
}
int main()
{
	Currency dollarscurrency;
	double rateofdollars=82.0;
    cout<<"Enter type of currency:";
    cin>>dollarscurrency.type;
    cout<<"Enter amount in dollars:";
    cin>>dollarscurrency.amount;
    cout<<"Currency type:"<<dollarscurrency.type<<",Amount:"<<dollarscurrency.amount<<endl;
    double rupees=converttorupees(dollarscurrency.amount,rateofdollars);
    cout<<"rupees:"<<rupees;
}
