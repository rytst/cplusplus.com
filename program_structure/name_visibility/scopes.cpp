#include <iostream>

using namespace std;

int foo; // global variable

int some_function()
{
    int bar;     // local variable
    bar = 0;

 // double bar;
 // bar = 0.0;   // wrong: name already used in this scope
}

int other_function()
{
    foo = 1; // ok: `foo` is a global variable
 // bar = 2; // wrong: `bar` is not visible from this function
}


// Variables declared in declarations that introduce a block,
// such as function parameters and variables declared in loops
// and conditions are local to the block they introduce.
int main()
{
    int x = 10;
    int y = 20; 
    {
        int x;  // ok: inner scope. x is hidden.
        x = 50; // sets value to inner x
        y = 50; // sets value to (outer) y

        cout << "inner block" << endl;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
    cout << "outer block" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
