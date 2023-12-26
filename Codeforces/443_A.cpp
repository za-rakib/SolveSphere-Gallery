#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    string str;
    set<char> str2;
    getline(cin, str);
    for (auto ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            str2.insert(ch);
        }
    }

    cout << str2.size() << endl;
    return 0;
}
