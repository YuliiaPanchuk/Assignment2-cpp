#include <iostream> //cin cout endl
#include <iomanip>
using namespace std;

//Prototypes
void calculation();
void readInput();
void minMax(double nr);

// Define variables
double nr1; 
double nr2;
double nr3; 
double nr4;
double nr5;
double nr6;
double nr7;
double nr8; 
double nr9;
double sum;
double highest;
double lowest;
double averageNum = 0;

int main()
{
	char answer;
	do
	{
		readInput();
		calculation();

		cout << "One more time (Y/N)?";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}


void minMax(double nr)
{
	if (nr > highest)
	{
		highest = nr;
	}

	if (nr < lowest)
	{
		lowest = nr;
	}
}

void calculation()
{
	highest = nr1;
	lowest = nr1;

	minMax(nr2);
	minMax(nr3);
	minMax(nr4);
	minMax(nr5);
	minMax(nr6);
	minMax(nr7);
	minMax(nr8);
	minMax(nr9);

	sum = (nr1 + nr2 + nr3 + nr4 + nr5 + nr6 + nr7 + nr8 + nr9) - (highest + lowest);
	averageNum = sum / 7;

	// Printing result
	cout << "=====================" << endl << endl;
	cout << "Judges figures: " << fixed << setprecision(1) << nr1 << " " << nr2 << " " << nr3 << " " << nr4 << " " << nr5 << " "
		<< nr6 << " " << nr7 << " " << nr8 << " " << nr9
		<< " give the final score " << averageNum << "." << endl;
}

void readInput()
{

	// Read user input
	system("CLS"); // Clear screen
	cout << "Figure skating scores" << endl;
	cout << "=====================" << endl << endl;

	cout << "Input number 1: ";
	cin >> nr1;

	cout << "Input number 2: ";
	cin >> nr2;

	cout << "Input number 3: ";
	cin >> nr3;

	cout << "Input number 4: ";
	cin >> nr4;

	cout << "Input number 5: ";
	cin >> nr5;

	cout << "Input number 6: ";
	cin >> nr6;

	cout << "Input number 7: ";
	cin >> nr7;

	cout << "Input number 8: ";
	cin >> nr8;

	cout << "Input number 9: ";
	cin >> nr9;
}
