#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void findFrequency(vector<int> arr)
{
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }
    for (auto x : map)
    {
        cout << x.first << " " << x.second << endl;
    }
}

void FindHighestAndLowestFrequency(vector<int> arr)
{
    unordered_map<int, int> map;

    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }
    vector<pair<int, int>> maps(map.begin(), map.end());
    sort(maps.begin(), maps.end(), comp);
    // First
    cout << maps[0].first << " " << maps[0].second << endl;
    // Second
    cout << maps[maps.size() - 1].first << " " << maps[maps.size() - 1].second << endl;
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
        // vector<int> arr = {10, 5, 10, 15, 10, 5};
        vector<int> arr = {2, 2, 3, 4, 4, 2};
        FindHighestAndLowestFrequency(arr);
    }
    return 0;
}