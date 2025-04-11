#include <iostream>
#include <vector>
using namespace std;

void print(int n)
{
    if (n < 1)
    {
        return;
    }
    print(n - 1);
    cout << n << endl;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

void arrprint(vector<int> arr, int n, int i)
{
    if (i == n)
    {
        return;
    }

    arrprint(arr, n, i + 1);
    cout << arr[i] << " ";
}

int climbingStairs(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return climbingStairs(n - 1) + climbingStairs(n - 2);
}
int main()
{
    int n = 5;
    // vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    // arrprint(arr, arr.size(), 0);
    cout << climbingStairs(2);
    return 0;
}