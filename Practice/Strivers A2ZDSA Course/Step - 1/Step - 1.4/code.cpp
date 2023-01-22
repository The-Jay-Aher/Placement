#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{

    int x = n;
    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }
    return count;
}

int reverseNumber(int n)
{
    bool neg = n < 0;
    n = abs(n);
    int rnum = 0;
    while (n != 0)
    {
        int temp = n % 10;
        if ((double)INT_MAX / rnum <= 10.0)
            return 0;
        rnum = rnum * 10 + temp;
        n /= 10;
    }
    if (neg)
        return rnum * -1;
    return rnum;
}

bool isPalindrome(int x)
{
    string sx = to_string(x);
    string sx1 = to_string(x);
    reverse(sx.begin(), sx.end());
    if (sx == sx1)
        return true;
    return false;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

bool armstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit, count);
        n /= 10;
    }
    return (sumofpower == originalno);
}

void printAllDivisors(int n)
{
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
    cout << endl;
}

bool isPrime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
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
        int n1;
        // int n2;
        cin >> n1;
        // int ans = lcm(n1, n2);
        bool ans = isPrime(n1);
        cout << ans << endl;
    }
    return 0;
}