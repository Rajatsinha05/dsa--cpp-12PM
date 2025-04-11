#include <iostream>
using namespace std;

int findIndex(int arr[], int t, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

void Findsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int t = 30;
    int arr2[5] = {1, 2, 3, 4, 15};
    int t2 = 3;
    int arr3[5] = {1, 2, 3, 4, 5};
    int t3 = 5;
    int result = -1;
    // cout << findIndex(arr, t, 5) << endl;
    // cout << findIndex(arr2, t2, 5) << endl;
    // cout << findIndex(arr3, t3, 5) << endl;
    Findsum(arr, 5);
    Findsum(arr2, 5);
    return 0;
}