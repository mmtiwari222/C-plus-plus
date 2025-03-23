#include<iostream>

using namespace std;
int main(){
// if else statement
// if - else statement is used to execute a block of code if the condition is true, otherwise it executes another block of code.
// syntax
// if(condition){
//    code to be executed if condition is true
// }else{
//  code to be executed if condition is false
// }

int age;
cout<<"Enter your age: ";
cin>>age;
if(age>=18){
    cout<<"You are eligible to vote."<<endl;
}else{
    cout<<"You are not eligible to vote."<<endl;
}

}