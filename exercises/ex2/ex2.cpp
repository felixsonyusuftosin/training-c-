// Exercises 2
// Fix bugs on code
// #include <stream>
// Here is the code
// int main
// {
// cout << "If this text",
// cout >> " appears on your display, ";
// cout << " endl;"
// cout << 'you can pat yourself on '
// << " the back!" << endl.
// return 0;
// )

// No class called stream , rather it is iostream
#include <iostream>
// it will error out as we didnt define a name space
using namespace std;
// at main there is no bracket
int main()
{
    cout << "If this text"; //comma as opposed to semi colon and no end stream
    cout << " appears on your display";
    cout << "endl";
    cout << "you can pat yourself on";
    cout << " the back!" << endl;
    return 0;
}