#include<iostream>

using namespace std;
int main (){
    // ASCII value - a numerical representation of a character
    // ASCII value of 'A' is 65
    // ASCII value of 'a' is 97
    // ASCII value of '0' is 48


    char ch = 'A';
    int asciiValue = ch; // implicit type casting
    cout << "ASCII value of " << ch << " is: " << asciiValue << endl;

    // ASCII value of 'a' is 97 using implicit type casting
    ch = 'a';
    asciiValue = ch; // implicit type casting
    cout << "ASCII value of " << ch << " is: " << asciiValue << endl;

    // ASCII value of '0' is 48 using explicit type casting
    ch = '0';
    asciiValue = (int)ch; // explicit type casting
    cout << "ASCII value of " << ch << " is: " << asciiValue << endl;

// check the position of the character in the ASCII table
    char ch1 = 'A';
    int asciiValue1 = ch1; // implicit type casting
    cout << "ASCII value of " << ch1 << " is: " << asciiValue1 << endl;
    cout << "Position of " << ch1 << " in ASCII table is: " << asciiValue1 - 64 << endl; // A=1, B=2, C=3, D=4, E=5, F=6, G=7, H=8, I=9, J=10, K=11, L=12, M=13, N=14, O=15, P=16, Q=17, R=18, S=19, T=20, U=21, V=22, W=23, X=24, Y=25, Z=26

    // find the position of the character in the ASCII table from the user
    char ch2;
    cout << "Enter a character: ";
    cin >> ch2;
    int asciiValue2 = ch2; // implicit type casting
    cout << "ASCII value of " << ch2 << " is: " << asciiValue2 << endl;
    cout << "Position of " << ch2 << " in ASCII table is: " << asciiValue2 - 64 << endl;
}