#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
  int start = 0;
  int end = letters.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (letters.at(mid) > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return letters.at(start % letters.size());
}

int main()
{
  int n;
  cin >> n;
  char target;
  cin >> target;
  vector<char> letters;
  for (int i = 0; i < n; i++)
  {
    char temp;
    cin >> temp;
    letters.push_back(temp);
  }

  return 0;
}