// Preprocessor directives
#include <iostream>
using namespace std;

// Define and initialize variables
int value1;
int value2;
int value3;
int value4;
int value5;
int value6;
int value7;
int value8;
int value9;
int value10;
int maxValue;
int maxValueTwo;

// Prototypes
void max(int value);
void readInput();
void calculate();

int main()
{	
	char answer;

	do
	{
		readInput();
		calculate();

		cout << "One more time (Y/N)? ";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}

void max(int value)
{
	if (value > maxValueTwo)
	{
		if (value > maxValue)
		{
			maxValueTwo = maxValue;
			maxValue = value;
		}
		else
		{
			maxValueTwo = value;	
		}
	}
}

void readInput()
{
	// Read user input
	system("CLS"); // Clear screen
	cout << "Second largest value" << endl;
	cout << "=====================" << endl << endl;

	cout << "Input value 1: ";
	cin >> value1;
	
	cout << "Input value 2: ";
	cin >> value2;

	cout << "Input value 3: ";
	cin >> value3;

	cout << "Input value 4: ";
	cin >> value4;

	cout << "Input value 5: ";
	cin >> value5;

	cout << "Input value 6: ";
	cin >> value6;

	cout << "Input value 7: ";
	cin >> value7;

	cout << "Input value 8: ";
	cin >> value8;

	cout << "Input value 9: ";
	cin >> value9;

	cout << "Input value 10: ";
	cin >> value10;
}

void calculate()
{
	maxValue = value1;
	maxValueTwo = value1;

	// Call
	max(value2);
	max(value3);
	max(value4);
	max(value5);
	max(value6);
	max(value7);
	max(value8);
	max(value9);
	max(value10);

	cout << "======================" << endl << endl;
	cout << "Second largest value is: " << maxValueTwo << endl << endl;
}