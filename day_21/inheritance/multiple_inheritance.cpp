#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A Class Constructor" << endl;
    }

    void fun_A(){
        cout << "Function from Class A is here" << endl;
    }
};

class B{
    int a = 10;

    public:
    B(){
        cout << "B Class Constructor" << endl;
    }

    void show(){
        cout << "Value of a from Class B is: " << a << endl;
    }
};

class C: public A, public B{
    public:
    C(){
        cout << "C Class Constructor" << endl;
    }
    
    ~C(){
        cout << "C Class Destructor" << endl;
    }
};



int main(){
    C obj1;
    obj1.fun_A();
    obj1.show();
    cout << "End of the program" << endl;

    return 0;
}