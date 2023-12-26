#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Declaring a string object
    string str, result, result2;
    getline(cin, str);

    for (char ch : str)
    {
        if (ch != ',' && ch != ' ' && ch != '{' && ch != '}')
        {
            result += ch;
        }
    }

    for (int i = 0; i < result.length(); i++)
    {
        bool isDuplicate = false;

        for (int j = i + 1; j < result.length(); j++)
        {
            if (result[i] == result[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            result2 += result[i];
        }
    }

    cout << result2.length() << endl;
    return 0;
}
