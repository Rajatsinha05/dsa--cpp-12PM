#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "enter value of a " << endl;
    cin >> a;
    cout << "enter value of b " << endl;
    cin >> b;
    cout << "enter value of c " << endl;
    cin >> c;

    if (a > b && a > c)
    {
        cout << " a is bigger than b and c";
    }
    else if (b > a && b > c)
    {
        cout << " b is bigger than a and c";
    }
    else if (c > a && c > b)
    {
        cout << " c is bigger than a and b";
    }
    else
    {
        cout << "all are same number";
    }

    return 0;
}