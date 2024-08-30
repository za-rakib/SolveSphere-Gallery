#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (number[i] >= 1 || number[i] <= 9 || number[i] % 10 == 0)
        {
            cout << 1 << endl;
            cout << number[i] << endl;
        }
        else
        {
            int count = 0;
            while (n > 0)
            {
                int digit = n % 10;
                if (digit > 0)
                {
                    cout++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
};