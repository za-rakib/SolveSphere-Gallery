#include <iostream>

using namespace std;

int main()
{
    int k, n, w, totalPrice = 0, borrow = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        totalPrice = totalPrice + (i * k);
    }
    borrow = totalPrice - n;
    if (borrow <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << borrow << endl;
    }

    return 0;
};