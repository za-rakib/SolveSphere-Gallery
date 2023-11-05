#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3], a = 1;
    int result;

    // Read input force vectors
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Check if any column has non-zero sum
    for (int i = 0; i < 3; i++)
    {
        result = 0;
        for (int j = 0; j < n; j++)
        {
            result = result + arr[j][i];
        }
        if (result != 0)
        {
            a = 0;
            break;
        }
    }

    if (a == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
