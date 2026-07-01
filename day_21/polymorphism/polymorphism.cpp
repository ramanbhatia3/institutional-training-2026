// polymorphism is of two types

// 1. Compile time - Static Binding - overloading
// 2. Run time - Dynamic Binding - overriding

#include <iostream>
using namespace std;

class Add{
    public:
    void fun(int a, int b){
        cout << "Sum of two numbers is: " << a + b << endl;
    }

    void fun(int a, int b, int c){  
        cout << "Sum of three numbers is: " << a + b + c << endl;
    }

    void fun(int a, int b, int c, int d){
        cout << "Sum of four numbers is: " << a + b + c + d << endl;
    }
};

int main(){
    Add obj;
    obj.fun(10, 20);
    obj.fun(10, 20, 30);
    obj.fun(10, 20, 30, 40);
    return 0;
}