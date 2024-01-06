#include <iostream>

using namespace std;

bool isAccidentallySwitched(const string &s)
{
  for (int i = 1; i < s.length(); i++)
  {
    if (!isupper(s[i]))
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s, s2;
  cin >> s;

  bool check = isAccidentallySwitched(s);
  // cout << check << endl;
  if (check)
  {
    for (int i = 0; i < s.length(); i++)
    {
      s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
    }
    cout << s << endl;
  }
  else
  {
    cout << s << endl;
  }

  return 0;
}
