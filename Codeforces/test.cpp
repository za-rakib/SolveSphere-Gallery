#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // sort(arr + 1, arr + n + 1);
    int max = *max_element(arr + 1, arr + n + 1);
    int min = *min_element(arr + 1, arr + n + 1);
    int maxIndex, minIndex;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == max)
        {
            maxIndex = i;
        }
        if (arr[i] == min)
        {
            minIndex = i;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    // Find the maximum element
    // cout << "\nMax Element = " << max << " at index " << maxIndex << endl;

    // cout << "\nMin Element = " << min << " at index " << minIndex << endl;
    if(maxIndex==1 && minIndex==n){
        cout<<0<<endl;
    }
    else if(max)
    if (maxIndex > minIndex)
    {
        cout << (n - minIndex) + (maxIndex - 1) - 1 << endl;
    }
    else
    {
        cout << (n - minIndex) + (maxIndex - 1) << endl;
    }

    return 0;
}
whats wrong
