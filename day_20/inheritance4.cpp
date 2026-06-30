#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "A Class Constructor" << endl;
        }
};

class B: public A{  
    int num1;
    int num2;

    public:
        B(){
            cout << "B Class Constructor" << endl;
        }
};



int main(){
    B obj1;
    A obj2;

    return 0;
}