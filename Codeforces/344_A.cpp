#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //  cout << "Output" << endl;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != arr[i + 1])
            flag++;
    }
    cout << flag << endl;
    return 0;
};