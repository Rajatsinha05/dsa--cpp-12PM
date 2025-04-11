#include <iostream>
#include <vector>
using namespace std;

int print(vector<int> subarray)
{
    int sum = 0;
    for (int val : subarray)
    {
        cout << val << "-> ";
        sum += val;
    }
    cout << endl;
    return sum;
}
int subarray(vector<int> arr, int k)
{
    int max = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        vector<int> sub;
        for (int j = i; j < arr.size(); j++)
        {
            sub.push_back(arr[j]);
            if (sub.size() == k)
            {
                int curr = print(sub);
                if (curr > max)
                {
                    max = curr;
                }
            }
        }
    }

    return max;
}

int slidingWindow(vector<int> nums, int k)
{

    int crr = 0;
    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        crr += nums[i];
    }
    max_sum = crr;
    for (int i = k; i < nums.size(); i++)
    {
        crr += nums[i];
        crr -= nums[i - k];
        if (crr > max_sum)
        {
            max_sum = crr;
        }
    }
    return max_sum;
}
int main()
{
    vector<int> numbers = {2, 2, -3, 4, -5, 4, -5, 10};

    int k = 4;
    // int max = subarray(numbers, k);
    int max = slidingWindow(numbers, k);
    cout << "Maximum sum of " << k << " contiguous elements is: " << max << endl;
    return 0;
}