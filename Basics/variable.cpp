#include<iostream>
using namespace std;

int main (){
    // variable - a named storage location in memory (contains a value - container)

    // variable declaration - specifying the type and name of the variable
    // variable initialization - assigning a value to the variable
    int a = 5; // integer variable
    float b = 3.14; // floating point variable
    char c = 'a'; // character variable
    bool d = true; // boolean variable

    cout << "Integer: " << a << endl; // output the value of a
    cout << "Float: " << b << endl; // output the value of b
    cout << "Character: " << c << endl; // output the value of c   
    cout << "Boolean: " << d << endl; // output the value of d

    // update variable value
    a = a + 1; // increment a by 1 (a+=1)
    b = b * 2; // multiply b by 2 (b*=2)
    cout << "Integer: " << a << endl; // output the value of a
    cout << "Float: " << b << endl; // output the value of b

}