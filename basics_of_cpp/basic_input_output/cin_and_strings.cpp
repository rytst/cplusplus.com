#include <iostream>
#include <string>


using namespace std;


int main()
{
    string mystr;
    cout << "What's is your name?";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What's is your favorite team?";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}
