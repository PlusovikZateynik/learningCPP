#include <cstdio>
#include <cstdlib>
#include <iostream>

class Student {
    public:
        float Student::addCourse(int hours, float grade) {
            float weightedGPA;
            weightedGPA = this->semesterHours * gpa;

            this->semesterHours += hours;
            weightedGPA += grade * hours;
            gpa = weightedGPA / this->semesterHours;

            return this->gpa;
        }

        int semesterHours;
        float gpa;
};

int main(int nNumberofArgs, char* pszArgs[]) {

    Student s;
    s.semesterHours = 10;
    s.gpa = 3.0;

    std::cout << "Before: s = (" << s.semesterHours << ", " << s.gpa << ")" << std::endl;

    s.addCourse(3, 4.0);

    std::cout << "After: s = (" << s.semesterHours << ", " << s.gpa << ")" << std::endl;


    Student t;
    t.semesterHours = 6;
    t.gpa;
    t.addCourse(3, 1.5);

    return 0;
}