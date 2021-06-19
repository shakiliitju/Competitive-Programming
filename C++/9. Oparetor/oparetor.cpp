#include<iostream>
using namespace std;

int main()
{
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    cout << sum1 << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;

    int a = 10;
    a += 5;
    cout << a << endl;

    int x = 5;
    int y = 3;
    cout << (x > y) << endl; // returns 1 (true) because 5 is greater than 3
    cout << (x > 3 && x < 10) << endl; // returns true (1) because 5 is greater than 3 AND 5 is less than 10
    cout << (x > 3 || x < 4) << endl; // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)

    return 0;
}
