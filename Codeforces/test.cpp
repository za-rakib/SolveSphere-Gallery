#include <iostream>

using namespace std;

int main()
{
    string guest, host, pile;
    int a = 0, b = 0;
    cin >> guest >> host >> pile;
    int len = max(guest.length() + host.length(), pile.length());
    cout << "len :" << len << endl;

}