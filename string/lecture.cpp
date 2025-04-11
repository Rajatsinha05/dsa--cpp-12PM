#include <iostream>
using namespace std;
#include <vector>
bool isPalindrome(string str)
{
    if (str.size() == 1)
    {
        return false;
    }
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

void print(vector<char> str)
{
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}
void generateSubstring(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        vector<char> substr;

        for (int j = i; j < str.size(); j++)
        {
            substr.push_back(str[j]);
            print(substr);
        }
    }
}

void substring(string str)
{
    int max = 0;
    string result;
    // test
    for (int i = 0; i < str.size(); i++)
    {
        string res = "";
        for (int j = i; j < str.size(); j++)
        {
            res += str[j];
            if (isPalindrome(res))
            {
                cout << "palindrome -" << res << "->";
                if (res.size() > max)
                {
                    max = res.size();
                    result = res;
                }
            }
            // cout << res << "->";
        }
        cout << endl;
    }
    cout << "Longest Palindrome -" << result << " with length -" << max << endl;
    return;
}
int main()
{
    string str = "xyz";
    substring("jaaavaaaascript");
    // generateSubstring(str);
    // vector<char> str = {'h', 'm', 'r', 't'};
    // print(str);
    // vector<string> str = {"madam", "level", "civic", "rotator", "hello", "radar", "A man, a plan, a canal: Panama"};
    // string course = "nnayann";
    // cout << isPalindrome(course) << endl;

    // string course2 = "";
    // for (int i = 0; i < course.size(); i++)
    // {

    // for (int i = course.size() - 1; i >= 0; i--)
    // {
    //     course2 += course[i];
    // }
    // if (course == course2)
    // {
    //     cout << "Palindrome" << endl;
    // }
    // else
    // {
    //     cout << "Not Palindrome" << endl;
    // }
    return 0;
}