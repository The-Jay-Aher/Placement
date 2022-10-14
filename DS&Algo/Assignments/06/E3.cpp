#include <bits/stdc++.h>
using namespace std;

int firstBadVersion(int n)
{
    int start = 0;
    int end = n;
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isBadVersion(mid) == true)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (isBadVersion(mid) == false)
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << firstBadVersion(n) << endl;
    return 0;
}