#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int c;
};

/*
For a protected member :
                    Public derivation   Private derivation    Protected derivation
    1. Private         Not inherited        Not inherited         Not inherited
    2. Protected       Protected            Private               Protected
    3. Public          Public               Private               Protected
*/

class Derived : protected Base
{

};
int main()
{
    Base b;
    Derived d;
    // cout<<d.a<<endl; // Will not work since a is protected in both base as well as derived class
    return 0;
}