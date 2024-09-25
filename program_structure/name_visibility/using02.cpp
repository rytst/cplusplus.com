#include <iostream>

using namespace std;


namespace first
{
    int x = 5;
}

namespace second
{
    double x = 3.1416;
}

// splitting the code in different blocks for `using namespace`
int main()
{
    {
        using namespace first;
        cout << x << endl;
    }
    {
        using namespace second;
        cout << x << endl;
    }
    return 0;
}

