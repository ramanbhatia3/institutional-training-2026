// write a cpp program to create a class for students to get and print details of a student .

// following are the details of the students

// Student_id, Name, Branch, Sub1_mark. Sub2_mark. Sub3_mark. Sub4_mark, Sub5_mark

// Write member function to calculate percentage, class(dist, first, second, pass) of a student

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Student{
    int s_id;
    string name;
    string branch;
    int marks[5];
    
    public:
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
    
};

int main(){
    Student s1;
    Student s2;

    int arr[] = {69, 66, 64, 75, 97};
    
    s1.setData(101, "Raman", "CSE");
    s1.setMarks(arr);
    s1.print_marks();
    s1.cal_per();

    

    return 0;
}