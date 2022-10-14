#include <bits/stdc++.h>
using namespace std;

int ceiling(int arr[], int key)
{
  int start = 0;
  int end = 6;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return arr[start];
}

int floor(int arr[], int key)
{
  int start = 0;
  int end = 6;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return arr[mid];
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return arr[end];
}

int main()
{
  int arr[7] = {2, 3, 5, 9, 14, 16, 18};
  int key = 15;
  cout << ceiling(arr, key) << endl;
  cout << floor(arr, key) << endl;
  return 0;
}