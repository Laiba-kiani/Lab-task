#include<iostream>
using namespace std;
int findLargestByValue(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
void findLargestByReference(int a, int b, int c, int &largest) {
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
}
int main() 
{
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    int largestValue = findLargestByValue(x, y, z);
    cout << "The largest number using Pass by Value: " << largestValue << endl;
    int largestReference;
    findLargestByReference(x, y, z, largestReference);
    cout << "The largest number using Pass by Reference: " << largestReference << endl;
    return 0;
}
