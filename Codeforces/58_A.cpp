#include <iostream>

using namespace std;
void isManaged(string s)
{
    string hello = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == hello[j])
        {
            j++;
        }
    }
    if (j == hello.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    isManaged(s);

    return 0;
};