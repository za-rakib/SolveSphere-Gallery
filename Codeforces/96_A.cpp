#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int counter = 1;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == n[i - 1])
        {
            counter++;
            // if (counter >= 6)
            // {
            //     cout << "YES" << endl;
            //     return 0;
            // }
        }
        else
        {
            counter = 1;
        }
        if (counter >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
};