#include <iostream>

using namespace std;

<<<<<<< HEAD
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
=======
bool isAccidentallySwitched(string &s)
{
    bool check = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]) == 1 || isupper(s[0]) != 1 && isupper(s[i + 1]) == 1)
        {
            check = true;
        }
        else
        {
            check = false;
            return check;
        }
    }
    return check;
>>>>>>> 9a9a2c0d2b125ed41f446a8a770ff37ae20ff8db
}

int main()
{
<<<<<<< HEAD
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
=======
    string s, s2;
    cin >> s;

    bool check = isAccidentallySwitched(s);
    //  cout << check << endl;

    if (check)
    {
        s2 = s; // Initialize s2 with the same size as s
        for (int i = 1; i < s.length(); i++)
        {
            if (isupper(s[i]))
                s2[i] = tolower(s[i]);
        }
        if (s2[0] >= 'a' && s2[0] <= 'z')
        {
            s2[0] = toupper(s2[0]);
        }

        cout << s2 << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
>>>>>>> 9a9a2c0d2b125ed41f446a8a770ff37ae20ff8db
}
