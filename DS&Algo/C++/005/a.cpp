#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a = 7;
  bool ans = 1;
  for (int i = 2; i < a; i++)
  {
    if (a % i == 0)
    {
      ans = 0;
      // cout << "Not a Prime Number" << endl;
      break;
    }
  }
  
}