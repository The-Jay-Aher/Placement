#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
  int n;
  cin >> n;
  bool isPrime = 1;
  for (int i = 2; i < n; i++)
  {
    if(n%i == 0) {
      isPrime = 0;
    }
  }

  if (isPrime)
  {
    cout << "It is a Prime Number" << endl;
  }
  else {
    cout << "It is not a Prime Number" << endl;
  }
  

  return 0;
}