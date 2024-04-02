#include <iostream>
<<<<<<< HEAD
=======

>>>>>>> 9a9a2c0d2b125ed41f446a8a770ff37ae20ff8db
using namespace std;

int main()
{
<<<<<<< HEAD
    string s;
    char u;
    bool c = true;
    cin >> s;
=======
    int n, m;
    cin >> n >> m;
>>>>>>> 9a9a2c0d2b125ed41f446a8a770ff37ae20ff8db

    for(int i = 1; i < s.length(); i++)
    {
<<<<<<< HEAD
        if(islower(s[i]))
        {
            c = false;
        }
    }

    if(c == true)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
    return 0;
}
=======
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0 || (i % 4 == 0 && j == 1) || (i % 4 == 2 && j == m))
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
>>>>>>> 9a9a2c0d2b125ed41f446a8a770ff37ae20ff8db
