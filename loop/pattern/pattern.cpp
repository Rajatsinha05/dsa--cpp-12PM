
#include <iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (i == 1 || i == 5)
    //         {
    //             cout << j << " ";
    //         }
    //         else
    //         {
    //             if (j == 1 || j == 5)
    //             {
    //                 cout << j << " ";
    //             }
    //             else
    //             {
    //                 cout << "-" << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    int n = 5;
    for (int i = 1; i <=n * n; i++)
    {
        cout << " " << i;
        
    }
    return 0;
}
