// prompt string manipulations

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prompt("what is your name bruv!  "),
        name,
        line(40, '-'),
        total = "Hello ";
    cout << prompt;
    getline(cin, name);
    total = total + name;
    cout << line << endl;
    cout << " Your name is " << name << endl;
    cout << " And it is " << name.length() << "characters long " << endl;
    cout << line << endl;
    return 0;
}