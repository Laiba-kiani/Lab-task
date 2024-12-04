#include<iostream>
using namespace std;
struct Product{
	int code;
	string description;
	char packaging;
	float price;
	float discount;
};
int main()
{
	Product products[10]={{101,"Product A",'L',300,10},{102,"Product B",'S',200,20},
	{103,"Product C",'L',500,50},{104,"Product D",'M',300,10},{105,"Product E",'S',100,10},
	{106,"Product F",'L',800,100},{107,"Product G",'L',600,10},{108,"Product H",'M',200,50},
	{109,"Product I",'S',200,20},{110,"Product J",'L',1000,200}};
	cout<<"Product in large packaging with net price between 200-1000:"<<endl;
	for(int i=0;i<10;i++)
	{
		if(products[i].packaging=='L')
		{
		float netprice=products[i].price*(1-products[i].discount/100);
			if(netprice>=200 && netprice<=1000)
			{
				cout<<"Code:"<<products[i].code<<",Description:"<<products[i].description<<
				",Packaging:"<<products[i].packaging<<",Price:"<<products[i].price<<",Discount:"
				<<products[i].discount<<",Netprice:"<<netprice<<endl;
			}
		}
	}
	
}
