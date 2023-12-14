#include <iostream>

using namespace std;

int main()
{
    string program;
    cin >> program;

    bool outputProduced = false;

    for (char c : program)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            outputProduced = true;
            break;
        }
    }

    cout << (outputProduced ? "YES" : "NO") << endl;

    return 0;
}
