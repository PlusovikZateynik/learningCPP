float addCourse(int hours, float grade) {
    return hours*grade;
}

class Student {
    public:
        int semesterHours;
        float gpa;

        float addCourse(int hours, float grade) {
            weightedGPA = ::addCourse(semesterHours, gpa);
            weightedGPA += ::addCourse(hours, grade);
            gpa = weightedGPA / semesterHours;

            return gpa;
        }
};

float weightedGPA;