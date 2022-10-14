#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> ans;
    int start = 0, end = numbers.size(), mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        
    }

    return ans;
}

int main()
{
    vector<int> numbers;
    int target;
    cin >> target;
    vector<int> ans = twoSum(numbers, target);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}