#include<iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue function:a ="<<a<<",b="<<b<<endl;
}
void swapByReference(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference function:a="<<a<<",b="<<b<<endl;
}
int main() 
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    cout << "Before swapByValue function: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue function: x = " << x << ", y = " << y << endl;
    cout << "Before swapByReference function: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference function: x = " << x << ", y = " << y << endl;
    return 0;
}
