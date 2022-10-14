#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    int start = 1;
    int end = num;
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        if (mid * mid == num)
        {
            return true;
        }
        else if (mid * mid < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

// bool isPerfectSquare(int num)
// {
//     int s = 0, e = num;
//     long long int mid = (s + e) / 2;
//     while (s <= e)
//     {
//         if (mid * mid > num)
//             e = mid - 1;
//         else if (mid * mid < num)
//             s = mid + 1;
//         else
//         {
//             return true;
//             break;
//         }
//         mid = (s + e) / 2;
//     }
//     return false;
// }

int main()
{
    int n;
    cin >> n;
    cout << isPerfectSquare(n) << endl;
    return 0;
}