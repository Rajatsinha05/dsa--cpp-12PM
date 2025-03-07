#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 20;

    // string result = (a > b) || () ? (a==b)? "true": "false" : "b is big";
    // cout << result << endl;

    // if (a > b)
    // {

    //     cout << "a is greater than b" << endl;
    // }
    // else
    // {
    //     cout << "b is greater than a" << endl;
    // }

    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "sunday" << endl;
        break;
    case 2:
        cout << "monday" << endl;
        break;
    case 3:
        cout << "tuesday" << endl;
        break;
    default:
        cout << "unknown" << endl;
    }

    return 0;
}