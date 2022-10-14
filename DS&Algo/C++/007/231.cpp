#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
  for (int i = 0; i < 31; i++)
  {
    int ans = pow(2, i);
    if (ans == n)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  bool ans = isPowerOfTwo(n);
  cout << ans << endl;
  return 0;
}