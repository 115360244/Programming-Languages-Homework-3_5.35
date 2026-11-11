#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

unsigned long long fibonacci(unsigned int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    unsigned long long a = 0, b = 1, c;

    for (unsigned int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    unsigned int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number: " << fibonacci(n) << endl;
	system("pause");
    return 0;
}