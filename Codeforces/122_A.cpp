#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[12] = {4, 7, 44, 47, 74, 444, 447, 474, 477, 744, 747, 777};
    for (int i = 0; i < 12; i++)
    {
        if (n % arr[i] == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
};