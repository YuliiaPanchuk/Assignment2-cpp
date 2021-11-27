// Preprocessor directives
#include <iostream>
using namespace std;

/* Allowed to print:
cout << "* ";
cout << " ";
cout << endl;
*/

int main()
{

	for (int y = 0; y <= 8; y++)
	{
		for (int x = 0; x <= 16; x++)
		{
			if ((x + y) % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";			
			}
		}
		cout << endl;
	}
}