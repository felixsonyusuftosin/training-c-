#include <iostream>
using namespace std;

void createSpace();
void printItem(string value);

int main()
{
    createSpace();
    printItem("oh what");
    printItem("a happy day");
    printItem("Oh yes");
    printItem("what a happy day");
}
void createSpace()
{
    cout << endl
         << "" << endl;
}
void printItem(string value)
{
    void createSpace();
    cout << value << endl;
}