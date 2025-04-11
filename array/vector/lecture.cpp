
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 5, 7, 15, 11};
    int max = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int curr = arr[i] - arr[i + 1];
            if (curr > max)
            {
                max = curr;
            }
        }
        else
        {
            int curr = arr[i + 1] - arr[i];
            if (curr > max)
            {
                max = curr;
            }
        }
    }
    cout << max << endl;

    // sort(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.end());
    // arr[2] = 200;
    // for (int val : arr)
    // {
    //     cout << val << " ";
    // }
    // arr.pop_back();
    // arr.push_back(100);
    // int n = arr.size();
    // cout << n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int val : arr)
    // {
    //     cout << val << " ";
    // }
    // int n;
    // cout << "enter the length of the array" << endl;
    // cin >> n;
    // vector<int> arr;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "enter of the value of : " << i << endl;
    //     int temp;
    //     cin >> temp;
    //     arr.push_back(temp);
    // }

    return 0;
}