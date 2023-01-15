#include <bits/stdc++.h>
using namespace std;

void explainVectors()
{
    vector<int> v;

    v.push_back(1);
    // emplace_back is same as push_back
    // emplace_back is faster than push_back
    v.emplace_back(2);

    // Vector of a pair data type
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // Container containing 5 pieces of 100.
    vector<int> v(5, 100);

    // A Container of size 5 is generated.
    vector<int> v(5);

    vector<int> v1(5, 20);
    // By doing this we, have copied the contents of v1 to v2.
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *it << endl;
}

int main()
{
    explainVectors();
    return 0;
}