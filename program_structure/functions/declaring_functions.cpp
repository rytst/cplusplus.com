#include <iostream>

using namespace std;

void odd(int x);
void even(int x);

int main()
{
    int i;

	do {
		cout << "Please, enter number (0 to exit): " << endl;

		cin >> i;

		odd(i);

	} while (i != 0);

	return 0;
}


void odd(int x)
{
    if ((x % 2) == 1) cout << "It's odd." << endl;
	else even(x);
}


void even(int x)
{
    if ((x % 2) == 0) cout << "It's even." << endl;
	else odd(x);
}
