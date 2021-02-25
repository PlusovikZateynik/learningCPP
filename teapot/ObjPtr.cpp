#include <cstdio>
#include <cstdlib>
#include <iostream>

class Student {
    public:
        int semesterHours;
        float gpa;
        float addCourse(int hours, float grade) {return 0.0;}
};

int main(int argc, char* pArgs[]) {
    Student s;

    Student* pS = &s;

    pS->gpa = 3.5;
    std::cout << "s.gpa = " << s.gpa << "\n"
                << "pS->gpa" << pS->gpa << std::endl;

    return 0;

}