#include <iostream>
using namespace std;

int main()
{

    int myNum;
    myNum = 15;              // myNum is 15
    cout << myNum <<endl;   // Output 15
    myNum = 10;            // Now myNum is 10
    cout <<  myNum << endl;       // Output 10

    int myIntNum = 5;            // Integer (whole number without decimals)
    cout << myIntNum <<endl;
    double myFloatNum = 5.99;   // Floating point number (with decimals)
    cout << myFloatNum <<endl;
    char myLetter = 'D';        // Character
    cout << myLetter <<endl;
    string myText = "Hello";    // String (text)
    cout << myText <<endl;
    bool myBoolean = true;     // Boolean (true or false)
    cout << myBoolean <<endl;

    int x = 5;
    int y = 6;
    int sum = x+y;
    cout << sum << endl;

    int a = 5, b = 6, c = 50;
    cout << a + b + c << endl;

    const int myNumber = 15;  // myNum will always be 15
    // myNumber = 10;  // error: assignment of read-only variable 'myNum'
    cout << myNumber;
    return 0;
}
