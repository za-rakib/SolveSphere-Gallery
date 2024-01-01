#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    string s;
    set<char> a;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a.insert(s[i]);
    }

    // Print the elements of the set
    for (char element : a)
    {
        cout << element << " ";
    }
    
    cout << endl;
    return 0;
}
