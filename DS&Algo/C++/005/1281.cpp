#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n)
{
  int sum = 0;
  int product = 1;
  while (n != 0)
  {
    int temp = n % 10;
    product *= temp;
    sum += temp;
    n /= 10;
  }
  return product - sum;
}

int main()
{
  int n;
  cin >> n;
  int ans = subtractProductAndSum(n);
  cout << ans << endl;
}