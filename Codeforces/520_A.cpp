#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    int arr[26] = {0};
    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for (int i = 0; i < str.length(); i++)
        {
            arr[str[i] - 'a'] = 1;
        }
        for (int i = 0; i < 26; i++)
        {
            sum = sum + arr[i];
            // cout << arr[i] << " ";
        }
        if (sum == 26)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
