#include <iostream>
using namespace std;

template <class T1, class T2>

class A{
    T1 num1;
    T2 num2;

    public:
    A(T1 n1, T2 n2){
        num1 = n1;
        num2 = n2;
    }

    void add(){
        cout << num1 + num2 << endl;
    }
};

int main(){
    A <int,int>obj(5,7);

    obj.add();
    
    A <float, int>obj2(5.67, 2);

    obj2.add();

    return 0;
}