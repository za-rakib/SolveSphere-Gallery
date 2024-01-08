#include <iostream>

using namespace std;

int main()
{
    int n, total = 0;
    cin >> n;
    string str;
    // cin >> str;
    // cout << str[0] << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str[0] == 'T')
        {
            total += 4;
        }
        if (str[0] == 'C')
        {
            total += 6;
        }
        if (str[0] == 'O')
        {
            total += 8;
        }
        if (str[0] == 'D')
        {
            total += 12;
        }
        if (str[0] == 'I')
        {
            total += 20;
        }
    }
    cout << total << endl;

    return 0;
};