#include <iostream>
using namespace std;

void removeDuplicatesInPlace(string &str)
{
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len;)
        {
            if (str[i] == str[j])
            {
                str.erase(str.begin() + j);
                --len;
            }
            else
            {
                ++j;
            }
        }
    }
}

int main()
{
    string input;
    cin >> input;
    removeDuplicatesInPlace(input);
    int length = input.length();
    if (length % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    // cout << length << endl;
    return 0;
}
