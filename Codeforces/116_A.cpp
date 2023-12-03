
#include <iostream>

using namespace std;

int main()
{
    int n, miniCapa = 0, currentCapa = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        currentCapa = currentCapa - a + b;
        miniCapa = max(miniCapa, currentCapa);
    }
    cout << miniCapa << endl;
    return 0;
};