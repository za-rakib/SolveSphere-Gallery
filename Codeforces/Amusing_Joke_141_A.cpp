#include <iostream>

using namespace std;

int main()
{
    string guest, host, pile;
    int a = 0, b = 0;
    cin >> guest >> host >> pile;
    int len = max(guest.length() + host.length(), pile.length());
    // cout << "len :" << len << endl;
    //  cin>>host>>pile 
    for (int i = 0; i < len; i++)
    {
        if (i < guest.length())
            a += guest[i];

        if (i < host.length())
            a += host[i];

        if (i < pile.length())
            b += pile[i];
    }
    cout << ((a == b) ? "YES" : "NO") << endl;
    return 0;
};