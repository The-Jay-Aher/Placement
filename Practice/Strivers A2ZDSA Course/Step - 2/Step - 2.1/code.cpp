#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    // Time Complexity -> O(n^2)
    // Space Complexity -> O(1)
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr.at(i), arr.at(min));
    }
    return arr;
}

vector<int> bubbleSort(vector<int> arr)
{
    // Time Complexity -> O(n^2)
    // Space Complexity -> O(1)
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

vector<int> insertionSort(vector<int> arr)
{
    // Did not do completely
    // Time Complexity -> O(n^2)
    // Space Complexity -> O(1)
    for (int i = 1; i < arr.size(); i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            // swap
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
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
    // cout << t << endl;
    while (t--)
    {
        int n;
        cin >> n;
        // cout << n << endl;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        vector<int> ans = bubbleSort(arr);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}