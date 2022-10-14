#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
  int start = -1;
  int end = arr.size() - 1;
  int ans = 0;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    if (arr[mid] < arr[mid + 1])
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main()
{
  vector<int> arr{0, 1, 0};
  cout << "The Peak Index in the Mountain is: " << peakIndexInMountainArray(arr) << endl;
  return 0;
}