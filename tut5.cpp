#include<iostream>
using namespace std;

int main()
{                     // '>>' is called EXTRACTION operator used with cin
    int num1,num2;    // '<<' is called INSERTION operator used with cout
    cout<<"Enter the value of num1\n";
    cin>>num1;

    cout<<"Enter the value of num2\n";
    cin>>num2;

    cout<<"The sum is: "<<num1 + num2;
    return 0;
}
