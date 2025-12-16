// #include <iostream>
// using namespace std;
// class Circle
// {
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     // Constant member function
//     double getRadius() const
//     {
//         return radius; // This function does not modify the object
//     }

//     // Regular member function
//     void setRadius(double r)
//     {
//         radius = r; // This modifies the object
//     }

//     // Constant member function to calculate area
//     double area() const
//     {
//         return 3.14159 * radius * radius; // This function does not modify the object
//     }
// };

// int main()
// {
//     // Create a constant object of Circle
//     const Circle c(5.0);

//     // c.setRadius(10.0); // This will give a compilation error because setRadius is not a const function

//     cout << "Radius: " << c.getRadius() << endl; // This works, because getRadius is a const function
//     cout << "Area: " << c.area() << endl;        // This works, because area is a const function

//     return 0;
// }



#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    char name[30];
    char division;
    float percentage;

public:
    // Function to input student details
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cin.ignore();  // To ignore the newline character left in the buffer
        cout << "Enter Name: ";
        cin.getline(name, 30);  // Input name
        cout << "Enter Division: ";
        cin >> division;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    // Function to display student details
    void displayData() {
        cout << "\nRoll Number: " << rollno;
        cout << "\nName: " << name;
        cout << "\nDivision: " << division;
        cout << "\nPercentage: " << percentage << "%\n";
    }
};

int main() {
    // Array of 5 student objects
    Student students[5];

    // Input data for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getData();  // Call getData for each student
    }

    // Display data for 5 students
    cout << "\nStudent details are:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nDetails of student " << i + 1 << ":";
        students[i].displayData();  // Call displayData for each student
    }

    return 0;
}
