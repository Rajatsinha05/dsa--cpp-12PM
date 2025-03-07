
#include <iostream>
using namespace std;

int main()
{

    int n = 41;
    // =, ==

    // if(n%2==0){

    // }
    // for (int i = 10; i > 0; i--)
    // {
    //     cout << i << " " << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}