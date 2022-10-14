#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  int i = 0;
  while (n != 0)
  {
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    // ans = (ans * 10) + bit;
    n = n >> 1;
    i++;
  }
  cout << ans << endl;
  return 0;
}

// Algorithm
/*
1. First we need to get the last bit from the number.
2. To do that we perform the and (&) operation on the number, if the remainder is 0 then the bit will be 0, and if the remainder is 1 then bit will be 1.
3. Then we right shift the number to remove the last bit of the number in a binary form.
4. We can only do this till the limit of int which is -2^32 to 2^32 - 1.
Normal Flow -> ans = (ans * 10) + digit;
Reverse Flow -> ans = (bit * pow(10,i)) + ans;
*/