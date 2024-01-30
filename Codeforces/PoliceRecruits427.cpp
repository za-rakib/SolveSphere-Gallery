#include <iostream>

using namespace std;

int main()
{

    int n, integer;
    cin >> n;
    int crime = 0, hiring = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> integer;
        if (integer < 0)
        {
            if (hiring > 0)
            {
                hiring--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            hiring += integer;
        }
    }
    cout << crime << endl;
    //  cout << "crimes : " << crimes << " hiring " << hiring << endl;
    return 0;
};