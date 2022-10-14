#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
  map<int, int> mp;
  for (int i = 0; i < arr.size(); i++)
  {
    mp[arr[i]]++;
  }
  set<int> s;
  for (auto a : mp)
  {
    s.insert(a.second);
  }
  if (mp.size() == s.size())
  {
    return true;
  }
  return false;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
      int temp;
      cin >> temp;
      arr.push_back(temp);
    }
    bool ans = uniqueOccurrences(arr);
    cout << ans << endl;
  }
  return 0;
}