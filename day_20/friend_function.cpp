#include <iostream>
using namespace std;

class A{
    int a;
    int b;

    public:
    A(){}

    A(int a, int b){
        this->a = a;
        this->b = b;
    }

    void show(){
        cout << a << " " << b << endl;
    }

    void copy(A &obj){
        a = obj.a;
        b = obj.b;
    }

    friend void Add(A &obj1, A &obj2);
};

void Add(A &obj1, A &obj2){
    int a = obj1.a + obj2.a;
    int b = obj1.b + obj2.b;
    
    cout << "a: " << a << " b: " << b;
}

int main(){
    A obj1(10,20);
    A obj2(obj1);

    Add(obj1, obj2);

    return 0;
}