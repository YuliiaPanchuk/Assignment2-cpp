#include <iostream> // library to use: cin cout endl

using namespace std;

// Prototypes
int primeNum(int);

int main()
{
    bool prime;
    for (int n = 2; n < 100; n++)
    {
        prime = primeNum(n); // prime will be true for prime numbers

        if (prime == true)
        {
            cout << n << " ";
        }
    }
    return 0;
}

// Checks if n is a prime number
int primeNum(int n)
{
    bool prime = true;

    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}