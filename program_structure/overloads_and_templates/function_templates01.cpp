#include <iostream>

using namespace std;


template <class T, class U>
bool are_equal(T a, U b)
{
    return a == b;
}

int main()
{
    if (are_equal(10, 10.0))
        cout << "x and y are equal" << endl;
    else {
        cout << "a and y are not equal" << endl;
	}

    return 0;
}
