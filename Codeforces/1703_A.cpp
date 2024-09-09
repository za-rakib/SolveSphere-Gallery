#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  string word;

  while (t--)
  {
    cin >> word;
    if ((word[0] == 89 || word[0] == 121) && (word[1] == 69 || word[1] == 101) && (word[2] == 83 || word[2] == 115))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
};