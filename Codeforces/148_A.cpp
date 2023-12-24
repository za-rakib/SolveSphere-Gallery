#include <iostream>

using namespace std;

int main()
{
    int l, k, m, n, d, count = 0;
    cin >> l >> k >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % l == 0 || i % k == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
};