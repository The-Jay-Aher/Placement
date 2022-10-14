#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
  long long int start = 0;
  long long int end = x;
  while (start <= end)
  {
    long long int mid = start + (end - start) / 2;
    long long int temp = mid * mid;
    if (temp == x)
    {
      return mid;
    }
    else if (temp < x)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return end;
}

int main()
{
  int x;
  cin >> x;
  int ans = mySqrt(x);
  cout << ans << endl;
  return 0;
}