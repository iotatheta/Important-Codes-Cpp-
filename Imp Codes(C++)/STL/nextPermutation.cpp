// Next and Previous Permutaion

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define endl '\n'

void solve1()
{
    ll n;
    cin >> n;
    
    vector<ll> arr(n);
    
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    auto b = arr;
    
    next_permutation(arr.begin(), arr.end());
    cout << "Next Permutation : " << endl;
    
    for(auto ele : arr)
    {
        cout << ele << " ";
    }
    
    prev_permutation(b.begin(), b.end());
    cout << endl << endl << "Previous Permutation :" << endl;
    
    for(auto ele : b)
    {
        cout << ele << " ";
    }
}

void solve2()
{
    ll n;
    cin >> n;
    
    vector<ll> arr(n);
    
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    do
    {
        for(ll i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while(next_permutation(arr.begin(), arr.end()));
    
// Prints current permutation and all lexicographically larger permutations
}

void solve3()
{
    ll n;
    cin >> n;
    
    vector<ll> arr(n);
    
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    do
    {
        for(ll i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while(prev_permutation(arr.begin(), arr.end()));
    
// Prints the current permutation and all lexicographically smaller permutations
}

// Same operations for string also 
void solve4()
{
    string str1, str2;
    cin >> str1;
    str2 = str1;
    
    next_permutation(str1.begin(), str1.end());
    cout<< "Next Permutation :" << endl;
    cout << str1 << endl << endl;
    
    prev_permutation(str2.begin(), str2.end());
    cout << "Previous Permutation :" << endl;
    cout << str2;
}

int main()
{
    fastio();
    solve4();
}
/*
solve1()
    TC: O(n)
        - Read array           : O(n)
        - Copy array           : O(n)
        - next_permutation()   : O(n)
        - Print next           : O(n)
        - prev_permutation()   : O(n)
        - Print previous       : O(n)
        Overall                : O(n)
    SC: O(n)   // Extra copied vector
    
solve2()
    TC: O(n × n!)
        - next_permutation() is O(n)
        - Printed for all n! permutations
    SC: O(1)   // In-place (excluding input array)
    
solve3()
    TC: O(n × n!)
        - prev_permutation() is O(n)
        - Printed for all n! permutations
    SC: O(1)   // In-place (excluding input array)
    
solve4()
    TC: O(n)
        - Read string          : O(n)
        - Copy string          : O(n)
        - next_permutation()   : O(n)
        - Print               : O(n)
        - prev_permutation()   : O(n)
        - Print               : O(n)
        Overall               : O(n)
    SC: O(n)   // Extra copied string
    
next_permutation(first, last)
    TC: O(n)
    SC: O(1)
    
prev_permutation(first, last)
    TC: O(n)
    SC: O(1)
*/
