#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;
    bool outputProduced = false;
    for (char c : input)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            outputProduced = true;
            break;
        }
    }

    cout << (outputProduced ? "YES" : "NO") << endl;
    //  cout << int(a) << endl;

    return 0;
};