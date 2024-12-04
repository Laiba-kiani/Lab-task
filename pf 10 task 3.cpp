#include<iostream>
using namespace std;
int cube(int n)
{
return n*n*n;
}
int main()
{
    int n; 
    cout << "Enter numbers to find their cube. Enter 0 to stop." << endl;
    while (true)
	 {
        cout << "Enter an integer: ";
        cin >> n;  
        if (n == 0) 
		{
            break; 
        }
        cout << "The cube of " << n << " is " << cube(n) << endl;
    }
    
    return 0;
}

	
