#include<iostream>

using namespace std;
int main() {
    // type casting - converting one data type to another data type
    // why type casting is needed? - to perform operations on different data types
    // implicit type casting - automatic conversion by the compiler
    int a = 10;
    float b = 10.5;
    float c = a + b; // implicit type casting
    cout << "Implicit type casting: " << b << endl;

    // explicit type casting - manual conversion by the programmer
    float d = 10.5;
    int e = (int)d; // explicit type casting
    cout << "Explicit type casting: " << e << endl;

}