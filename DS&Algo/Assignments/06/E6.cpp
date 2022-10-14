#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    int i = 1;
    while (n > i)
    {
        n -= i;
        i++;
    }
    if (i == n)
    {
        return i;
    }
    return i - 1;
}

int main()
{
    int n;
    cin >> n;
    cout << arrangeCoins(n) << endl;
    return 0;
}