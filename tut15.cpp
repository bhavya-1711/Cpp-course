#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments)

// int sum(int a,int b); //--> Acceptable
// int sum(int a, b); -->  Not Acceptable
int sum(int ,int); //--> Acceptable

void g(void);

int main(){
    int num1 , num2;
    cout<<"Enter first number "<<endl; 
    cin>>num1;   
    cout<<"Enter first number "<<endl;
    cin>>num2;
    // num1 and num2 are actual paramters
    cout<<"The sum is: "<<sum(num1, num2)<< endl;  
    g();  
    return 0;
}

int sum(int a, int b){
    // Formal paramters a and b will be taking values from actual paramters 
    int c =a+b;
    return c;
}

void g(){
    cout<<"Good morning"<<endl;
}