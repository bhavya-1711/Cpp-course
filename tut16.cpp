#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}

 // This will not swap a and b 
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
 
 // Call by Reference using pointers
void swapPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

 // Call by Reference using C++ reference variables
void swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a =4,b=5;
    // cout<<"The sum of 4 and 5 is: "<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a<<" and the value of b is  "<<b<<endl;
    // swap(a,b); //  This will not swap a and b 
    // swapPointer(&a,&b); // This will swap a and b using pointer refernce 
    swapReferenceVar(a,b); // This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is  "<<b<<endl;
    return 0;
}