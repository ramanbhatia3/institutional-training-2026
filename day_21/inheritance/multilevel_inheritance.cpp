#include <iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "A Class Constructor" << endl;
    }
};

class B: public A{
    int a = 10;

    public:
    B(){
        cout << "B Class Constructor" << endl;
    }

    void show(){
        cout << "Value of a: " << a << endl;
    }
};

class C: public B{
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
    obj1.show();
    cout << "End of the program" << endl;

    return 0;
}