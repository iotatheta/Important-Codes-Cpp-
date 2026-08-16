// Input of random size technique

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define endl '\n'

void solve1()
{
    ll maxi = LLONG_MIN, x;
    
    while(cin >> x) // V.V.I.
    {
        maxi = max(maxi, x);        
    }
    // can take any number of input
    // it is applicable for any data type
    
    cout << maxi;
}
// TC: O(N)
// SC: O(1)

void solve2()
{
    string str;
    vector<string> rev_str;
    
    while(cin >> str)
    {
        rev_str.push_back(str);
    }
    
    reverse(rev_str.begin(), rev_str.end());
    
    for(auto &s : rev_str)
    {
        cout << s << " ";
    }
}
// TC: O(N)
// SC: O(N)

int main()
{
    fastio();
    solve1();
}