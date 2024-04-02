class Solution
{
public:
  bool isPalindrome(int x)
  {
    if (x < 0)
    {
      return false;
    }
    long long temp = x;
    long long rev = 0;
    while (x != 0)
    {
      int digit = x % 10;
      rev = rev * 10 + digit;
      x /= 10;
    }
    return (temp == rev);
  }
};