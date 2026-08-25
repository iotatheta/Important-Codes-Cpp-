// Complex Number implementation

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long
#define ull unsigned long long
#define endl '\n'

#define i128 __int128

class Complex
{
public:
    ll real, img;
    
    Complex()
    {
        real = img = 0;
    }
    
    Complex(ll real, ll img)
    {
        this -> real = real;
        this -> img = img;
    }
    
    void print()
    {
        if(this -> img >= 0)
            cout << this -> real << " + " << this -> img << "i" << endl;
        else
            cout << this -> real << " - " << llabs(this -> img) << "i" << endl;
    }
    
    Complex sum(const Complex &obj)
    {
        Complex c;
        c.real = this -> real + obj.real;
        c.img = this -> img + obj.img;
        
        return c;
    }
    
    Complex operator + (const Complex &obj)
    {
        Complex c;
        c.real = this -> real + obj.real;
        c.img = this -> img + obj.img;
        
        return c;
    }
    
    Complex operator - (const Complex &obj)
    {
        Complex c;
        c.real = this -> real - obj.real;
        c.img = this -> img - obj.img;
        
        return c;
    }
    
    Complex operator * (const Complex &obj)
    {
        Complex prod;

        ll a, b, c, d;

        a = this -> real;
        b = this -> img;
        c = obj.real;
        d = obj.img;
        
        prod.real = (a * c - b * d);
        prod.img = (b * c + a * d);
        
        return prod;
    }
    
};
// TC: O(1)
// SC: O(1)

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    Complex A(a, b);
    Complex B(c, d);
    
    Complex C = A * B;
    
    C.print();
}
// TC: O(1)
// SC: O(1)

int main()
{
    fastio();
    solve();
}
// TC: O(1)
// SC: O(1)
