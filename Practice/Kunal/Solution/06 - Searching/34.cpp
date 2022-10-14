#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
  int start = 0;
  int end = nums.size() - 1;
  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (nums.at(mid) == target)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (nums.at(mid) < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  int ans1 = -1;
  start = 0;
  end = nums.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (nums.at(mid) == target)
    {
      ans1 = mid;
      start = mid + 1;
    }
    else if (nums.at(mid) < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  vector<int> index;
  index.push_back(ans);
  index.push_back(ans1);
  return index;
}

int main()
{
  vector<int> nums;
  for (int i = 0; i < 6; i++)
  {
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }

  // int arr[6] = {5,7,7,8,8,10};
  int target = 8;
  vector<int> ans = searchRange(nums, target);
  cout << ans.at(0) << " " << ans.at(1) << endl;
  return 0;
}