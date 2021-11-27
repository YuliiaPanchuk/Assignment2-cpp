#include <iostream> //cin cout endl
#include <iomanip>
using namespace std;

//Prototypes
void calculation();
void input();

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
double averageNum = 0;

int main()
{
	char answer;
	do
	{
		calculation();
		cout << "One more time (Y/N) ?";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');
	return 0;
}

void calculation()
{
	sum = nr1 + nr2 + nr3 + nr4 + nr5 + nr6 + nr7 + nr8 + nr9;
	averageNum = sum / 9;

	// Printing result
	cout << "Judges figures: " << nr1 << nr2 << nr3 << nr4 << nr5 << nr6 << nr7 << nr8 << nr9;
}

void input()
{

}
