/**
 * Problem Definition:
 *  Write a C++ program to accept Roll Number, Marks Obtained and TotalMarks of
 *  a student. Calculate the percentage scored by the student. Display the roll
 *  number, marks obtained, total marks and the percentage scored by the
 *  student. Use getter-setter methods.
 */

#include <iostream>
#include <conio.h>

using namespace std;

class Student {
    int rollNo;
    float marksObtained;
    float totalMarks;

    public:
    void setData() {
        cout << "Enter roll no: ";
        cin >> rollNo;
        cout << "Enter marks obtained: ";
        cin >> marksObtained;
        cout << "Enter total marks: ";
        cin >> totalMarks;
    }

    void getData() {
        cout << "Roll no: " << rollNo;
        cout << "Marks obtained: " << marksObtained;
        cout << "Total marks: " << totalMarks;
    }

};

int main() {
    clrscr();

    Student st1;
    st1.setData();
    st1.getData();

    getch();
    return 0;
}
