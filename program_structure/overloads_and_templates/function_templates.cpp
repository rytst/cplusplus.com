#include <iostream>

using namespace std;

// Overloaded functions may have the same definition.

int sum(int a, int b)
{
    return a + b;
}


double sum(double a, double b)
{
    return a + b;
}


int main()
{
    cout << sum(10,  20)  << endl;
	cout << sum(1.0, 1.5) << endl;

	return 0;
}
