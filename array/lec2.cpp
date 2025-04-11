#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {-10, -2, -10, -30, -1, -10};
    int t = -10;
    int result = -1;
    int res[3];
    int j = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == t)
        {
            res[j++] = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}