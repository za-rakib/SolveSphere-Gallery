#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> colors;
    int color;

    for (int i = 0; i < 4; i++)
    {
        cin >> color;
        colors.insert(color);
    }

    // Print the contents of the set using an iterator
    for (auto it = colors.begin(); it != colors.end(); ++it)
    {
        cout << *it << endl;
    }

    int minimumHorseshoesToBuy = 4 - colors.size();
    // cout << minimumHorseshoesToBuy << endl;

    return 0;
}
