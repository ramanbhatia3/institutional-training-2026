#include <iostream>
using namespace std;

class A{
    public:
        void fun(){
            cout << "Happy Learning!" << endl;
        }
};

class B: public A{
    int num1;
    int num2;

    public:
    B(int a, int b){
        num1 = a;
        num2 = b;
    }
    void show(){
        cout << num1 << " " << num2;
    }
    
};



int main(){
    B obj(12, 13);
    obj.fun();
    obj.show();

    return 0;
}