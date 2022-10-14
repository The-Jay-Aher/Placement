#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  int i = 0, j = nums.size() - 1;
  while (i < j)
  {
    int sum = nums[i] + nums[j];
    if (sum == target)
      return {i + 1, j + 1};
    else if (sum > target)
      j--;
    else
      i++;
  }
  return {}; // Target not found
}

int main()
{
  int n;
  cin >> n;
  vector<int> arr;
  int target = 9;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    arr.push_back(temp);
  }
  vector<int> ans = twoSum(arr, target);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans.at(i) << endl;
  }

  return 0;
}