#include <iostream>

using namespace std;

int main()
{
    int n, even = 0, odd = 0, evenIndex, oddIndex;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
            evenIndex = i;
        }
        else
        {
            odd++;
            oddIndex = i;
        }
    }
    cout << ((even == 1) ? evenIndex : oddIndex) << endl;
    // cout << even << " " << odd << endl;
    return 0;
};