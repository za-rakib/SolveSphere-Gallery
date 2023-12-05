#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        total += num;
    }
    if (total)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
};