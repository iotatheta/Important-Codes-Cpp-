// Compare two very large decimal numbers (floating point numbers)

// It is risky to compare floating point numbers with the == operator, because it is possible that values should be equal but they are not because of precision errors

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 

#define ll long long
#define endl '\n'

void solve()
{
    // Use long double for higher precision when dealing with very large or precise floating-point numbers
    long double a, b;
    if (!(cin >> a >> b)) return;
    
    cout << fixed << setprecision(12) << a << endl;
    cout << fixed << setprecision(12) << b << endl;
    
    // Epsilon comparison to avoid floating point precision inaccuracies
    // Using 1e-9 for double, or 1e-14 / 1e-15 for long double depending on precision needs
    if(fabsl(a - b) < 1e-9L)
    {
        cout << a << " and " << b << " are equal" << endl; 
    }
    else
    {
        cout << a << " and " << b << " are not equal" << endl;
    }
}
// TC: O(1), SC: O(1)

int main()
{
    fastio();
    solve();
    return 0;
}