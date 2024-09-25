#include <iostream>

using namespace std;

// static storage (such as global variables)
int x;

int main()
{
    // automatic storage (such as local variables)
    int y;

    cout << x << endl;
    cout << y << endl;
    return 0;
}
