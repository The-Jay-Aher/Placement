#include <bits/stdc++.h>

int peakIndexInMountainArray(std::vector<int> &arr)
{
  // int ans = -1;
  int start = 0;
  int end = arr.size() - 1;
  // int temp = 0;
  int mid = start + (end - start) / 2;
  while (start < end)
  {
    // int mid = start + (end - start) / 2;

    if (arr.at(mid) < arr.at(mid + 1))
    {
      start = mid + 1;
    }
    else
    {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }

  // std::cout << temp << std::endl;
  return start;
}

int main()
{
  int n;
  std::cin >> n;
  std::vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int temp;
    std::cin >> temp;
    arr.push_back(temp);
  }
  int ans = peakIndexInMountainArray(arr);
  std::cout << ans << std::endl;
  return 0;
}