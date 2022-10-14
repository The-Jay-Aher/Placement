#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
  int start = 0;
  int end = arr.size() - 1;
  while (start < end)
  {
    int mid = start + (end - start) / 2;
    if (arr.at(mid) < arr.at(mid + 1))
    {
      start = mid + 1;
    }
    else if (arr.at(mid) > arr.at(mid + 1))
    {
      end = mid;
    }
  }
  return end;
}

int main()
{
  vector<int> arr;
  for (int i = 0; i < 4; i++)
  {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }
  int ans = peakIndexInMountainArray(arr);
  cout << ans << endl;
  return 0;
}