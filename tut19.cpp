#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using fucntion with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using fucntion with three arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of cylinder
float volume(int r, int h){
    return (3.14 *r *r *h);
}

// cube
int volume(int a){
    return (a*a*a);
} 

// Rectangle
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cuboid of  3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of  3 and 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of  3 is "<<volume(3)<<endl;

    return 0;
}