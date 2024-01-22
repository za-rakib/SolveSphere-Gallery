#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] != str[j])
            {
                str[i] = "OK";
            }
            else
            {
                str[i] = str[i] + '1';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
};