#include <bits/stdc++.h>
// using namespace std;

std::pair<long long, long long> getMinMax(long long a[], int n)
{
}

int main()
{
  int n = 6;
  long long arr[n] = {3, 2, 1, 56, 10000, 167};
  for (int i = 0; i < n; i++)
  {
    std::cout << arr[i] << std::endl;
  }

  std::pair ans = getMinMax(arr, n);
  std::cout << ans.first << std::endl;
  std::cout << ans.second << std::endl;
  return 0;
}
