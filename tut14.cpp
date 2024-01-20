#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId ;     // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
} ep;

union money  // union uses only one memory allocation at a time
{
    /* data */
    int rice ;  // 4
    char car;   // 1
    float pounds; // 4
};

int main(){
    enum Meal{breakfast , lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2)<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;

    // ep harry;
    // struct employee shubham;
    // struct employee bhavya;
    // harry.eId = 1;
    // harry.favChar= 'c';
    // harry.salary = 12000000;
    // cout<<"The value is "<<harry.salary<<endl;
    // cout<<"The value is "<<harry.eId<<endl; 
    // cout<<"The value is "<<harry.favChar<<endl;
    return 0;
}