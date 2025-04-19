#include <iostream>
using namespace std;

// Prototypes
void line(), message();

int main()
{
    cout << "Hello! The program starts in main()." << endl;

    line();
    message();
    line();
    cout << "At the end of main()." << endl;

    return 0;
}

// to draw a line
void line()
{
    cout << "---------------------------------------------" << endl;
}

// To display a message.
void message()
{
    cout << "In function message()." << endl;
}