#include <iostream>
using namespace std;

template <class T>

class A{
    T num;

    public:
    A(T n){
        num = n;
    }

    void show(){
        cout << num << endl;
    }
};

int main(){
    A <int>obj(5);

    obj.show();
    
    A <float>obj2(5.67);

    obj2.show();

    return 0;
}