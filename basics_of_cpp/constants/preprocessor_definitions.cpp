#include <iostream>

using namespace std;

/* This replacement is performed by the preprocessor,
 and happens before the program is compiled,
 thus causing a sort of blind replacement:
 the validity of the types or syntax involved is not checked in any way. */
#define PI 3.14159
#define NEWLINE '\n'


int main()
{
    double r = 5.0; // radius
    double circle;


    circle = 2 * PI * r;

    cout << circle;
    cout << NEWLINE;
}
