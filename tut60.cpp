#include<iostream>
#include<fstream>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order to work with files in C++ , you will have to open it. Primarily there are two ways to open a file:
// 1. Using the constructor 
// 2. Using the member function open() of the class

using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;
    // Opening files using constructor and writing it
    // ofstream out("sample60.txt");  // Write operation
    // out<<st;

    // Opening files using constructor and reading it
    ifstream in("sample60b.txt");  // Read operation
    // in>>st2;  // only reads the first word and does not count spaces
    getline(in,st2);
    cout<<st2;

    return 0;
}