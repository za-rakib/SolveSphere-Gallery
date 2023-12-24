#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentLength = 1;
    int maxLength = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            currentLength++;
        }
        else
        {
            currentLength = 1;
        }

        maxLength = max(maxLength, currentLength);
    }

    cout << maxLength << endl;

    return 0;
}
