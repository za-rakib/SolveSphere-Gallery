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
    s2 = s;
    for (int i = 0; i < s.length(); i++)
    {
      if (isupper(s[i]))
        s2[i] = tolower(s[i]);
      else
        s2[i] = toupper(s[i]);
    }
    cout << s2 << endl;
  }
  else
  {
    cout << s << endl;
  }

  return 0;
}
