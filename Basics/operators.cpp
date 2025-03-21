#include<iostream>
using namespace std;

int main(){
    // operators - arithmetic, relational, logical, bitwise, assignment, increment/decrement
    // arithmetic operators
    int a = 10, b = 20;
    cout << "a + b = " << a + b << endl; // addition - sum of a and b
    cout << "a - b = " << a - b << endl; // subtraction - difference of a and b
    cout << "a * b = " << a * b << endl; // multiplication - product of a and b
    cout << "a / b = " << a / b << endl; // division - quotient of a and b
    // integer division - quotient of a and b (integer part only)
    cout << "a % b = " << a % b << endl; // modulus - remainder of a divided by b

    // assignment operators
    int c = 10;
    c += 5; // c = c + 5 
    cout << "c = " << c << endl;    
    c -= 5; // c = c - 5
    cout << "c = " << c << endl;
    c *= 5; // c = c * 5
    cout << "c = " << c << endl;
    c /= 5; // c = c / 5
    cout << "c = " << c << endl;
    c %= 5; // c = c % 5
    cout << "c = " << c << endl;

    // increment operators - pre-increment and post-increment
    int d = 10;
    cout << "d = " << d << endl;
    // pre-increment - increments the value before using it
    ++d; // d = d + 1
    cout << "d = " << d << endl;
    // post-increment - increments the value after using it
    d++; // d = d + 1
    cout << "d = " << d << endl;

    // decrement operators - pre-decrement and post-decrement
    int e = 10;
    cout << "e = " << e << endl;
    // pre-decrement - decrements the value before using it
    --e; // e = e - 1
    cout << "e = " << e << endl;
    // post-decrement - decrements the value after using it
    e--; // e = e - 1
    cout << "e = " << e << endl;

    // relational operators - used to compare two values
    cout << "a == b: " << (a == b) << endl; // equal to 
    cout << "a != b: " << (a != b) << endl; // not equal to
    cout << "a > b: " << (a > b) << endl; // greater than
    cout << "a < b: " << (a < b) << endl; // less than
    cout << "a >= b: " << (a >= b) << endl; // greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // less than or equal to

    // logical operators - used to combine two or more conditions
    cout << "(a > b) && (a < b): " << ((a > b) && (a < b)) << endl; // logical AND - both conditions must be true
    cout << "(a > b) || (a < b): " << ((a > b) || (a < b)) << endl; // logical OR - at least one condition must be true
    cout << "!(a > b): " << !(a > b) << endl; // logical NOT - negates the condition (true becomes false and vice versa)

// bitwise operators - used to perform bit-wise operations on integers - first convert to binary and then perform the operation
    int f = 10, g = 20;
    cout << "f & g: " << (f & g) << endl; // bitwise AND - both bits must be 1 
    cout << "f | g: " << (f | g) << endl; // bitwise OR - at least one bit must be 1
    cout << "~f: " << (~f) << endl; // bitwise NOT - inverts all bits
    cout << "f ^ g: " << (f ^ g) << endl; // bitwise XOR - both bits must be different

}