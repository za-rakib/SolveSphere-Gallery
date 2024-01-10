#include <iostream>

using namespace std;

int main()
{
    int n, candies;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> candies;
        if (candies % 2 == 0)
        {
            cout << (candies / 2) - 1 << endl;
        }
        else
        {
            cout << (candies / 2) << endl;
        }
    }

    return 0;
};
