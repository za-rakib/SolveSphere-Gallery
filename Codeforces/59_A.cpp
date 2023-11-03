#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int capitalLetter = 0, smallLetter = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            capitalLetter++;
        }
        else
        {
            smallLetter++;
        }
    }
    if (capitalLetter > smallLetter)
    {
        char ch;
        for (int i = 0; i < s.size(); i++)
        {
            ch = toupper(s[i]);
            cout << ch;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch;
            ch = tolower(s[i]);
            cout << ch;
        }
    }
    return 0;
};