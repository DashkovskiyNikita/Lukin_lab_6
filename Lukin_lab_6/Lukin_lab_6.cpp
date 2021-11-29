#include <iostream>
using namespace std;

struct Student {
    int grades[5];
};


bool check_grade(const int* const grades, const int size) {
    bool isPositive = true;
    for (int i = 0; i < size; i++) {
        if (grades[i] < 4) {
            isPositive = false;
            break;
        }
    }
    return isPositive;
}

void print_info() {
    cout << "info..." << endl;
}

int main()
{
    Student students[3];
    students[0] = Student{ {4,5,5,5,5} };
    students[1] = Student{ {4,5,5,4,3} };
    students[2] = Student{ {4,4,4,4,5} };
    bool isPresent = false;
    for (auto student : students) {
        int* grades = student.grades; 
        bool check = check_grade(grades, 5);
        if (check) {
            isPresent = true;
            print_info();
        }
    }
    if (!isPresent) cout << "There are no students who meet these conditions" << endl;
}
