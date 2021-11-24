// Preprocessor directives
#include <iostream>
#include <iomanip> // setw()
using namespace std;

int main()
{
	int start = 1;
	int end = 15;
	int value1 = 10;
	int value2 = 100;
	int value3 = 1000;


	// Read input
	system("CLS");
	cout << "Multiplication table" << endl;
	cout << "====================" << endl << endl;

	// Title (special chars in console)
	cout << setw(5) << "n" << setw(10) << "10*n" << setw(10) << "100*n" << setw(10) << "1000*n" << setw(10) << endl
		<< "===================================" << endl;

	// The table
	for (int n = start; n <= end; ++n)
	{
		cout << setw(4) << n << setw(10) << value1 * n 
			<< setw(10) << value2 * n << setw(10) << value3 * n << endl;
	}
}