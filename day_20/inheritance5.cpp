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
    // CONSTRUCTOR CHAINING - A() B()
        B(){
            cout << "B Class Constructor" << endl;
        }
        B(int a, int b){
            cout << "B Class Constructor (int, int)" << endl;
        }
};



int main(){
    B obj1(1,2);

    return 0;
}