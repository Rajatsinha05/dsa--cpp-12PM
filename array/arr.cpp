#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    // sum += arr[0];
    // sum += arr[1];
    // sum += arr[2];
    // sum += arr[3];
    // sum += arr[4];
    cout << sum << endl;
    return 0;
}