#include<iostream>
using namespace std;
void printTempOpinionByValue(int temperature)
 {
    if (temperature < 10) 
	{
        cout << "Cold" << endl;
    } 
	else if (temperature >= 20 && temperature <= 30) 
	{
        cout << "OK" << endl;
    } 
	else if (temperature > 30) 
	{
        cout << "Hot" << endl;
    }
}
void printTempOpinionByReference(int &temperature) 
{
    if (temperature < 10) 
	{
        cout << "Cold" << endl;
    }
	 else if (temperature >= 20 && temperature <= 30)
	  {
        cout << "OK" << endl;
    } 
	else if (temperature > 30) 
	{
        cout << "Hot" << endl;
    }
}
int main()
 {
    int tempValue, tempRef;
    cout << "Enter the temperature for Pass by Value: ";
    cin >> tempValue;
    cout << "Temperature opinion (Pass by Value): ";
    printTempOpinionByValue(tempValue);
    cout << "Enter the temperature for Pass by Reference: ";
    cin >> tempRef;
    cout << "Temperature opinion (Pass by Reference): ";
    printTempOpinionByReference(tempRef);
    return 0;
}
