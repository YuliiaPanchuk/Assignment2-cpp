// Preprocessor directives
#include <iostream>
#include <iomanip> // setw()
using namespace std;

/* cout << "* ";
cout << " ";
cout << endl;
*/

int main()
{
	// Declare variables
	int y;
	int x;

	for (int y = 0; y <= 8; y++)
	{
		for (int x = 0; x <= 8; x++)
		{
			cout << "*" << endl;
		}
	}
}