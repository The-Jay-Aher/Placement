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
    vector<int> vtemp1(5, 100);

    // A Container of size 5 is generated.
    vector<int> vtemp2(5);

    vector<int> v1(5, 20);
    // By doing this we, have copied the contents of v1 to v2.
    vector<int> v2(v1);
    // Iterator points to the memory address of v.begin()
    vector<int>::iterator it = v.begin();

    it++;
    // If you try to print v.begin() you are trying to print the memory address not the element.
    // And in order to access what is stored in that place in the memory we use * with it
    cout << *it << endl;

    it = it + 2;
    cout << *it << endl;
    // End will not point to last location of the vector.
    // It will point to the location after the last location of the vector.
    // After doing an `it--` then only it will move to the last position of the vector.
    vector<int>::iterator it = v.end();
    // Not used most of the time
    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0) << endl;
    // v.back() will give us the element at the last position of the vector.
    cout << v.back() << endl;
    // Printing a Vector
    // Type - 1
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Type - 2
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // Type - 3
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // Erasing Function

    // Before -> {10, 20, 30, 40}
    v.erase(v.begin() + 1);
    // After -> {10, 30 , 40}

    // Before -> {10, 20, 12, 23, 35}
    // This will erase from the start till the end, the end location will not be deleted.
    v.erase(v.begin() + 2, v.begin() + 4); // v.erase(start, end)
    // After ->  {10, 20, 35}

    // Insert Function

    vector<int> v(2, 100);          //{100, 100}
    v.insert(v.begin(), 300);       // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);                       // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size() << endl; // 2

    // {10, 20}
    v.pop_back() // {10}

        // v1 -> {10, 20}
        // v2 -> {30, 40}
        v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    // Erases everything from the vector
    v.clear();

    // If the vector is empty will return true, alse false
    cout << v.empty() << endl;
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5);   // {5, 2, 4}
    ls.emplace_front(); // {2, 4}

    // Rest of the function are similar to vector.
    // begin, end, rbegin, rend, clear, insert, size, swap.
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.front();

    dq.back();

    // Rest of the function are similar to vector.
    // begin, end, rbegin, rend, clear, insert, size, swap.
}

void explainStack()
{
    // LIFO -> Last In Fist Out
    // E.g. -> Stack of trays in cafeteria.
    // In Stack there are only 3 Functions ->
    // 1. Push
    // 2. Pop
    // 3. Top
    // In Stack, all the operations are O(1) Operations.
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    // Emplace is similar to push
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top() << endl; // prints 5 "** st[2] is invalid **"

    st.pop(); // st -> {3, 3, 2, 1}

    cout << st.top() << endl; // prints 3

    cout << st.size() << endl; // prints 4

    cout << st.empty() << endl; // True or False -> For our case it will give False

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    // FIFO -> First In First Out
    // Eg. -> Train Ticket Line

    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout << q.back() << endl; // prints 9

    cout << q.front() << endl; // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

void explainPriorityQueue()
{
    // It is a queue in a stack like structure
    // The element with the highest value will always be at the top
    // This is known as Max Heap
    priority_queue<int> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8, 5, 2}

    cout << pq.top(); // prints 8

    // size, swap, empty function is same aas others

    // This is known Minimum Heap
    // A priority queue that stores the minimum element at the top
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2, 5}
    pq.push(8);     // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

void explainSet()
{
    // Set stores everything in a sorted order
    // And every element in the set is unique
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2} -> Here since 2 is already present it is not added again to the set.
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);
    // It will return an iterator which points to the 3

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);
    // If a element is not present in the set it will always return st.end()

    // Before -> {1, 4, 5}
    st.erase(5); // erase 5 // takes logarithmic time
    // After -> {1, 4}

    int cnt = st.count(1);
    // If a element exits in the  set it will give you 1
    // Else it will give you 0

    // You can give both address and element to the erase function for deletion
    auto it = st.find(3);
    st.erase(it);

    // Before -> {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // (first, last) // Erase in set works in a similar to vector.
    //  After -> {1, 4, 5}

    // lower_bound() and upper_bound() function work in the same way
    // as in the vector it does

    // This is the syntax
    auto it3 = st.lower_bound(2);

    auto it4 = st.upper_bound(3);
}

void explainMultiSet()
{
    // Everything is similar as set
    // It will only obey sorted but not unique property
    // But it also stores the duplicate elements

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all the 1's are erased from the multiset

    // It will count the number of 1's on the multiset
    int cnt = ms.count(1);

    // only a single one erased, the first one
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all the functions are similar as set
}

void explainUnorderedSet()
{
    // It stores unique elements only, but elements are not stored in the sorted order
    // The elements are stored in a randomized order
    unordered_set<int> st;
    // The lower_bound() and upper_bound() operation do not work with unordered_set
    // rest all the functions are the same
    // The time complexity for mostly all operations is -> O(1)
    // But, in the worst case which is very rare can only occur in big data
    // The time complexity will be -> O(n)
}

void explainMap()
{
    // The keys are unique
    // But the values can be repetitive
    // map<key, value> mpp;
    // key and value can have any datatype
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;          // {{1, 2}}
    mpp.emplace({3, 1}); // {{1, 2}, {3, 1}}
    mpp.insert({2, 4});  // {{1, 2}, {2, 4}, {3, 1}};

    mpp[{2, 3}] = 10;

    // Map stores unique keys in sorted order
    // Something similar to the set data structures
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl; // return 2
    cout << mpp[5] << endl; // return NULL or 0

    auto it = mpp.find(3);
    cout << *it.second << endl; // To find value

    auto it = mpp.find(5); // Since, 5 is not present it will point to the end.

    // This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same the above
}

void explainMultiMap()
{
    // Everything is same as map, only difference is
    // It can store multiple keys
    // Only mpp[key] cannot be used here
}

void explainUnorderedMap()
{
    // It has the same differences as the differences
    // from set and unordered_set
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // They are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()
{
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    // Sort in descending order
    sort(a, a + n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // Sort according to the second element
    // If the second element is the same then sort according to the first element but in decreasing order

    sort(a, a + n, comp);
    // A comp is a self return comparator
    // and this comparator is a boolean function

    int cnt = 7;
    int cnt = __builtin_popcount(); // Return the number of 1's in the binary of the 7

    long long num = 15646548651651;
    int cnt = __builtin_popcountll(); // If the number is long long the popcount becomes popcountll

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    // Returns all the permutations of the string 123
    // E.g -> 132, 213, 231, 312, 321

    // If you say s = "231"
    // You will only get 312, 321 as the permutations
    // So, if you want to all the permutations sort the string first
    sort(s.begin(), s.end());

    int maxi = *max_element(a, a + n); // Originally returns the address of the max element
    // To get the value we add a * to it.
    // Similarly, min_element is also there.
}

int main()
{
#ifndef ONLINE_JUDGE
    // For getting input from input.txt
    freopen("input.txt", "r", stdin);
    // For writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif // !ONLINE_JUDGE

    explainVectors();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}