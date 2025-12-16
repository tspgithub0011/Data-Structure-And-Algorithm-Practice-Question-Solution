#include<iostream>
using namespace std;

class Student {
public:
    int rollno;
    Student(int r) {
        rollno = r;
    }

    // Copy constructor
    Student(const Student &s) {
        rollno = s.rollno;
    }
};

int main() {
    Student s1(101);    // Calls parameterized constructor
    Student s2 = s1;    // Calls copy constructor
    cout << "Roll No of s1: " << s1.rollno << endl;
    cout << "Roll No of s2: " << s2.rollno << endl;
}
