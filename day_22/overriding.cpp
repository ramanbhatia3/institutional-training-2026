#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout << "Fun - A";
    }
};

class B: public A{
    public:
    void fun(){
        cout << "Fun - B";
    }
};

int main(){
    // B obj; // stack
    // obj.fun(); // compile time binding
    
    A *ptr = new B(); // heap
    ptr->fun(); // static binding


    return 0;
}