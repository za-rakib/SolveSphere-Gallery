#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int free_rooms = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b - a >= 2)
        {
            free_rooms++;
        }
    }
    cout << free_rooms << endl;
    return 0;
};