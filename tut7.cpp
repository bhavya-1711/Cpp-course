#include<iostream>

using namespace std;

int c =45; // global varibale c

int main()
{
    // int a,b,c; // local variables
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;

    // c = a+b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The sum of global variable c is: "<<::c<<endl;
    // "::" is scope resolution operator 

    // **************Float ,double and long double LITERALS**************
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout<<"The value of d is: "<<d<<endl;      
    // cout<<"The value of e is: "<<e<<endl;      

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


    //****************Reference Variables*****************
    float x = 455;
    float &y= x; // y is refernce variable
    cout<<x<<endl;
    cout<<y<<endl;

    //*************Type casting*****************
    int p = 45;
    float s= 45.56;
    cout<<"The value of p is: "<<(float)p<<endl;
    cout<<"The value of p is: "<<float(p)<<endl;

    cout<<"The value of s is: "<<(int)s<<endl;
    cout<<"The value of s is: "<<int(s)<<endl;
    
    int r = int(s);

    cout<<"The expression p + s is: "<<p + s<<endl;
    cout<<"The expression p + int(s) is: "<<p + int(s)<<endl;
    cout<<"The expression p + (int)s is: "<<p + (int)s<<endl;
    
    return 0;
}
