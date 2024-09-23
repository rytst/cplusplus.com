#include <iostream>

using namespace std;


// The template parameters can not only include types introduced by
// `class` or `typename`, but can also include expressions of a particular type.

template <class T, int N>
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    cout << fixed_multiply<int, 2>(10) << endl;
	cout << fixed_multiply<int, 3>(10) << endl;

	return 0;
}
