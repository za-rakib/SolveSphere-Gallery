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
    //  cout << maxHeightIndex << " " << minHeightIndex << endl;
    // Calculate the minimum number of seconds
    if (maxIndex > minIndex)
    {
        minIndex = (n - 1) - minIndex;
        cout << (maxIndex + minIndex - 1) << endl;
    }
    else
    {
        minIndex = (n - 1) - minIndex;
        cout << (maxIndex + minIndex) << endl;
    }

    return 0;
}
