#include <iostream>
using namespace std;

class A{
    int num1;
    public:
        A(){
            cout << "A Class Constructor" << endl;
        }
        A(int a){
            num1 = a;
            cout << "Value of a: " << num1 << endl;
        }
        
};

class B: public A{  
    int num1;
    int num2;

    public:
        B(){
            cout << "B Class Constructor" << endl;
        }
        B(int a, int b):A(b){
            cout << "B Class Constructor (int, int)" << endl;
        }
};


int main(){
    B obj1(1,2);

    return 0;
}