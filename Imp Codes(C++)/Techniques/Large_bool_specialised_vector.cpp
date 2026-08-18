// We can store a vector of size 1e8 for bool vector

// The special memory efficiency comes specifically from: vector<bool> because the standard library provides a specialized packed representation for it.

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define endl '\n'

const int N = 1e8; 

vector<bool> isprime(N + 1, true);

void precompute()
{
    isprime[0] = isprime[1] = false;
    
    for(int i=4;i<=N;i+=2)
    {
        isprime[i] = false;
    }
    
    for(int i=3;i<=N/i;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=N;j+=2*i)
            {
                isprime[j] = false;
            }
        }
    }
}

void solve()
{
    int n = 1e8;
    int cnt = 0;
    
    for(int i = 2; i <= n; i++)
    {
        if(isprime[i])
        {
            cnt++;
            if(cnt % 100 == 1)
                cout << i << endl;
        }
    }
}

int main()
{
    fastio();
    precompute();
    solve();
}