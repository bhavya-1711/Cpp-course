#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // int a =34;
    // cout<<"The value of a was : "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is : "<<a<<endl;

    //************ Constants in c++ ************

    // const float a = 3.11;
    // cout<<"The value of a was : "<<a<<endl;
    // a = 45.6; // you will get an error coz "a" is a constant
    // cout<<"The value of a is : "<<a<<endl;

    // MANIPULATORS IN C++
    // int a=3, b=78, c=1223;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // OPERATOR PRECEDENCE
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = (a*5)+b-5+8;
    cout<<c;
    return 0;
}
