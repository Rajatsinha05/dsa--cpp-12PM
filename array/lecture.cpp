#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 35, 40};
    int t = 65;
    // 0(n)
    int n = 5;
    int res[2] = {-1, -1};

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == t)
        {
            res[0] = i;
            res[1] = j;
            break;
        }
        else if (arr[i] + arr[j] < t)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    // 0(n^2) /BigO
    // for (int i = 0; i < n - 1; i++)
    // {

    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == t)
    //         {
    //             res[0] = i;
    //             res[1] = j;
    //             // cout << i << " " << j << endl;
    //             break;
    //         }
    //     }
    // }

    cout << res[0] << " " << res[1] << endl;
    return 0;
}