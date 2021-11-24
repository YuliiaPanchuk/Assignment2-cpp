// Preprocessor directives
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	// Define and initialize variables
	int num;
	int calcOdds = 1;

	// Read input
	system("CLS");
	cout << "The product of odd integers" << endl;
	cout << "============" << endl << endl;

	for (num = 1; num <= 15; num += 2)
	{
		if ((num % 2) != 0)
		{
			calcOdds += calcOdds * num;
		}
	}

	// Display result
	cout << "The product of all odd integers between 1 and 15 is  " << calcOdds << endl;
		return 0;	
}