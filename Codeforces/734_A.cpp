#include <iostream>

using namespace std;

int main()
{
    int n, a = 0, d = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 65)
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
};