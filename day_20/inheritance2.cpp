#include <iostream>
using namespace std;

class A{
    int num1;
    int num2;
    public:
        void fun(){
            cout << "Happy Learning!" << endl;
        }
};

class B: public A{
    
};



int main(){
    B obj1;
    obj1.fun();

    return 0;
}