#include <iostream>
#include <algorithm> // Add this line to include the <algorithm> header

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    cout << ((s == t) ? "YES" : "NO") << endl;

    return 0;
}
