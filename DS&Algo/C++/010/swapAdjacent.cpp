#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swapAlternate(int arr[], int size)
{
  for (int i = 0; i < size; i += 2)
  {
    if (i + 1 < size)
    {
      swap(arr[i], arr[i + 1]);
    }
  }
  printArray(arr, size);
}

int main()
{
  int even[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  int odd[5] = {1, 3, 5, 7, 9};
  swapAlternate(even, 8);
  swapAlternate(odd, 5);
  return 0;
}