#include <iostream>
using namespace std;

class A{
    public:
        void msg(){
            cout << "Hello World!" << endl;
        }
};

class B: public A{
    public:
    void display(){
        cout << "Msg: ";
    }
};



int main(){
    B obj1;
    obj1.display();
    obj1.msg();

    return 0;
}