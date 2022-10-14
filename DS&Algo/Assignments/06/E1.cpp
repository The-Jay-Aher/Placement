#include <bits/stdc++.h>
using namespace std;

int mySqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << mySqrt(n) << endl;
    return 0;
}