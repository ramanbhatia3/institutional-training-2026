#include <iostream>
using namespace std;

class A{
    int num;
    public:
    A(int a){
        num = a;
    }

    A operator -(A &obj){
        cout << this->num - obj.num << endl;
    }
};

int main(){
    A obj1(12);
    A obj2(10);


    obj1-obj2;

    return 0;
}