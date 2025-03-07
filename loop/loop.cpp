#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << i << j << " ";
            sum = sum + i + j;
        }
        cout << sum << endl;

        for (int k = 1; k <= sum; k++)
        {
            if (sum % k == 0)
            {
                cout << k << " ";
            }
        }
        cout << endl;
        sum = 0;
        // cout << endl;
    }
    return 0;
}

// 11 , 12,13, 14
// 21 ,22 23,24
//  31,32,33,34
// 11 , 12,13, 14// 11 , 12,13, 14 // 11 , 12,13, 14

// 11 12 13
// 22 23
// 33