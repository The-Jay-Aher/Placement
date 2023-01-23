#include <bits/stdc++.h>
using namespace std;

void solveQ1(vector<int> arr)
{
    return *max_element(arr.begin(), arr.end());
}

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
    cout.setf(ios::boolalpha);
    // cout.precision(2);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
            void solveQ1(arr);
        }
    }
    return 0;
}