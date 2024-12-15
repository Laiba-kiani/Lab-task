// comments
#include <iostream>
#include <fstream>
using namespace std;
int main()
 {
    ofstream outFile;
	outFile.open("output.txt");
	outFile<< "Output file";
    outFile << "Line 1: writing to a file in c++";
    outFile << "Line 2: file uthandling is essential for data manipulation";
    outFile.close();
    cout<< "Output file"<<endl;
    cout << "Line 1: writing to a file in c++"<<endl;
    cout << "Line 2: file uthandling is essential for data manipulation";
	return 0; 
}
