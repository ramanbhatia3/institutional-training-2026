// public, private and protected

#include <iostream>
using namespace std;

class A{
    public:
    int a = 10;

    protected:
    int b = 20;

    private:
    int c = 30;
};

class B: public A{
    public:
    void show(){
        cout << a << " " << b << endl;
    }
};

int main(){
    B obj;

    cout << obj.a << endl;
    obj.show();

    return 0;
}