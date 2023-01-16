#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif // !ONLINE_JUDGE

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // cout.precision(2);

    int t;
    cin >> t;
    while (t--)
    {
        long long int h, x, y;
        cin >> h >> x >> y;
        if (x > y)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}