#include<iostream>
using namespace std;

inline int product(int a,int b){
    // Not recommended to use below lines with inline funtions
    // static int c=0; // This will executes only once
    // c= c+1; // Next time this fucntion is run , the value of c will be reatined
    return a*b;
}

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

// int strlen(const char *p){

// }

int main(){
    int a , b;
    // cout<<"Enter the value of and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" RS in bank account, you will receive "<<moneyReceived(money)<<" RS after 1 year "<<endl;
    cout<<"For VIP : If you have "<<money<<" RS in bank account, you will receive "<<moneyReceived(money,1.20)<<" RS after 1 year "<<endl;
    return 0;
}