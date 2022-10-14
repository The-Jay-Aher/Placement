#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
  return -1;
}

int main()
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
  int ans = pivotIndex(arr);
  cout << ans << endl;
  return 0;
}