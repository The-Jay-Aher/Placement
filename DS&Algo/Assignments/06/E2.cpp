#include <bits/stdc++.h>
using namespace std;

int guessNumber(int n)
{
    int first = 1, last = n, mid = 0, temp = 0;
    while (first <= last)
    {
        mid = first + (last - first) / 2;
        temp = guess(mid);
        if (temp == 0)
            return mid;
        else if (temp == -1)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return mid;
}

int main()
{
    int n, pick;
    cin >> n >> pick;
    int ans = guessNumber(n);
    cout << ans << endl;
    return 0;
}