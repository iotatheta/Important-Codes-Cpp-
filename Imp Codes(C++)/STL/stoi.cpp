// Conversion from string to integer or double and vice versa
// stoi -> string(s) to(to) integer(i) [remember technique]
// stod -> string(s) to(to) double(d)

#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve1()
{
    int number = 789;
    bool isValid = true;
    string text1 = to_string(number);  // becomes "789"
    string text2 = isValid ? "true" : "false";  // becomes "true"
}

void solve2()
{
    double n1 = 789.0;
    string text1 = to_string(n1);
    // becomes "789.000000" -> upto 6 decimal places

    double n2 = 789.5;
    string text2 = to_string(n2);
    // becomes "789.500000"
    
    double n3 = 789.123;
    string text3 = to_string(n3);
    // becomes "789.123000"
}

void solve3()
{
    string numberText = "123";
    int number = stoi(numberText);  
    // becomes 123
    
    string decimalText = "45.67";
    double decimal = stod(decimalText);  
    // becomes 45.67
    
    string validStart = "42abc";
    int number1 = stoi(validStart);  
    // becomes 42 (trailing letters ignored)
    
    string invalidStart = "abc";
    int number2 = stoi(invalidStart);  
    // This will throw an error

}

int main()
{
    fastio();
    solve1();
    solve2();
    solve3();
}

/*
solve1()
    TC: O(len)
        - to_string(int)           : O(len)
        - Ternary operation        : O(1)
    SC: O(len)
        - Stores the converted string
    
solve2()
    TC: O(len)
        - Three calls to to_string(double), each O(len)
    SC: O(len)
        - Stores the converted strings
    
solve3()
    TC: O(len)
        - stoi(numberText)         : O(len)
        - stod(decimalText)        : O(len)
        - stoi(validStart)         : O(len)
        - stoi(invalidStart)       : O(len) (throws std::invalid_argument)
    SC: O(1)
    
to_string(int)
    TC: O(len)
    SC: O(len)
    
to_string(double)
    TC: O(len)
    SC: O(len)
    
stoi(string)
    TC: O(len)
    SC: O(1)
    
stod(string)
    TC: O(len)
    SC: O(1)
    
// len = Length of the input/output string (number of characters)
*/