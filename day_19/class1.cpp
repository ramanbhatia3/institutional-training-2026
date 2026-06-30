#include <iostream>
#include <string>
using namespace std;

class Employee {
    int Eid;
    string Name;
    int Salary;
    string Dept;

    public:
    Employee(int i, string n, int s, string d){
        Eid = i;
        Name = n;
        Salary = s;
        Dept = d;

    }

    void showData(){
        cout << Eid << " " << Name << " " << Salary << " " << Dept;
    }
};


int main(){
    Employee e1(001, "Raman", 25000, "Manufacturing");

    e1.showData();

    return 0;
}