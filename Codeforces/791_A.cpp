#include <iostream>

using namespace std;

int main()
{
    int a, b, result = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        result++;
    }

    cout << result << endl;
    return 0;
};