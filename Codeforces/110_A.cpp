#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int flag = 0;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            flag++;
        }
        n /= 10;
        // cout << n << endl;
        // cout << flag << endl;
    }
    if (flag == 4 || flag == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
};