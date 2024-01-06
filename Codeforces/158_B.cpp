
#include <iostream>

using namespace std;

int main()
{
    int n, s, arr[5] = {0};
    cin >> n;
    while (n--)
    {
        cin >> s;

        arr[s] += 1;
    }
    int total = arr[4] + arr[3] + arr[2] / 2;
    arr[1] -= arr[3];
    if (arr[2] % 2 == 1)
    {
        total += 1;
        arr[1] -= 2;
    }
    if (arr[1] >= 1)
    {
        total += (arr[1] + 3) / 4;
    }
    cout << total << endl;
    return 0;
};