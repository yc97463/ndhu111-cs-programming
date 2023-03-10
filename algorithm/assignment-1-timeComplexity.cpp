#include <iostream>
#include <string>

using namespace std;

void findPalindromes(string s)
{
  int n = s.length();
  int countId = 1;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 2; j <= n; j++)
    {
      string sub = s.substr(i, j - i);
      int m = sub.length();
      bool isPalindrome = true;
      for (int k = 0; k < m / 2; k++)
      {
        if (sub[k] != sub[m - k - 1])
        {
          isPalindrome = false;
          break;
        }
      }
      if (isPalindrome)
      {
        cout << countId << ". \t" << sub << endl;
        countId++;
      }
    }
  }
  cout << "========================" << endl
       << "Find "
       << countId - 1
       << " result(s)." << endl;
}

int main()
{
  string s = "racecarabcbamadam";
  findPalindromes(s);

  return 0;
}
