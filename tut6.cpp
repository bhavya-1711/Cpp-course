// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" --> This will produce an error if this.h is not present in current directory

using namespace std;
int main()
{
    int a =4,b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    // Assignment operators --> used to assign values to variables
    // int x = 3,y=9;
    // char d = 'd';

    // Comparison operators
    cout<<"Following are the comparison operators"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;


    // Logical operators
    cout<<"Following are the logical operators"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) is: "<<(!(a==b))<<endl;
    
    return 0;
}

