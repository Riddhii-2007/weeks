#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float marks;

public:
    // Constructor
    student()
    {
        rollno = 0;
        name = " ";
        marks = 0.0;
    }

    // Function to input details
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display details
    void display()
    {
        cout << rollno << "\t" << name << "\t" << marks << endl;
    }

    // Destructor
    ~student()
    {
        cout << "Student object with roll no " << rollno << " is destroyed\n";
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation of student objects
    student* students = new student[n];

    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        students[i].input();
    }

    // Display details
    cout << "\nRoll no\tName\tMarks\n";
    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    // Release allocated memory
    delete[] students;

    return 0;
}
