#include <iostream>
using namespace std;

class A{
    public:
        void msg(){
            cout << "Hello World!" << endl;
        }
};

class B{
    A obj; // B having A obj -> Has-A-Relation

    public:
    void display(){
        cout << "Msg: ";
        obj.msg();
    }
};



int main(){
    B obj1;
    obj1.display();

    return 0;
}

// Is-A-Relation is called Inheritance