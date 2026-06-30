// class Student {
//     // data + operation
// };

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Student{
    int s_id;
    string name;
    string branch; // non-static data = instance data member
    int marks[5];
    
    public:
    static string college; // static data = class data member

    void setData(int i, string n, string b){
        s_id = i;
        name = n;
        branch = b;
    }

    void setMarks(int inputMarks[]){
        for (int i = 0; i < 5; i++){
            marks[i] = inputMarks[i];
        }
    }

    void print_marks(){
        for (int i = 0; i < 5; i++){
            cout << marks[i] << " ";
        }
    }

    void cal_per(){
        int sum = 0;
        for (int i = 0; i < 5; i++){
            sum += marks[i];
        }
        cout << "Percentage: " << sum/5;
    }
    
    void show_details(){
        cout << name << " " << branch << " " << college;    
    }

    static void show_college(){
        cout << "College: " << college;
    }
    
};

string Student::college = "RBPU";

int main(){
    Student s1;
    Student s2;
    
    // Student::show_college();
    
    s1.setData(101, "Raman", "CSE");
    s2.setData(102, "Suman", "CSE");
    
    s1.show_details();

    return 0;
}