#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define ull unsigned long long
#define endl '\n'

#define i128 __int128

void solve()
{
    int n;
    string str;
    cin >> n;
    
    cin.ignore();  // Clear the newline from input buffer
    
    getline(cin, str);

    cout << n << endl << str;
}

int main()
{
    fastio();
    solve();
}