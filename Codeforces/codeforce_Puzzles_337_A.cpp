#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, difference = INT_MAX;
    cin >> n >> m;
    int arr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    for (int i = 0; i <= m - n; i++)
    {
        int differ = arr[i + n - 1] - arr[i];
        if (difference > differ)
        {
            difference = differ;
        }
    }

    cout << difference << endl;
    return 0;
}
