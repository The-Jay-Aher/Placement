#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int len, int key)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] == key)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  // Whether 1 is present in it or not ?
  int key;
  cin >> key;
  bool found = linearSearch(arr, 10, key);
  cout << found << endl;
  if (found)
  {
    cout << "Key is present" << endl;
  }
  else
  {
    cout << "Key is absent" << endl;
  }

  return 0;
}