#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, total = 0, sum = 0, counter = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    total /= 2;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        ++counter;
        if (sum > total)
        {
            break;
        }
    }

    cout << counter << endl;

    return 0;
};