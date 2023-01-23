#include <iostream>
#include <vector>
using namespace std;

class Student {
    public:
        Student(string name, double GPA) : name_(name), GPA_(GPA) {}

        double get_GPA() { return GPA_; }
        string get_name() { return name_; }

    private:
        string name_;
        double GPA_;
};

class Department {
    public:
        void add_student(Student& student) { students_.push_back(student); }

        int below_GPA(double GPA) {
            int count = 0;
            for (auto& student : students_) {
                if (student.get_GPA() < GPA) {
                    count++;
                }
            }
            return count;
        }

        void above_GPA(double GPA) {
            for (auto& student : students_) {
                if (student.get_GPA() >= GPA) {
                    cout << student.get_name() << endl;
                }
            }
        }

    private:
        vector<Student> students_;
};

int main() {
    Department department;

    Student student1("John Doe", 3.5);
    Student student2("Jane Smith", 2.0);
    Student student3("Bob Johnson", 3.8);

    department.add_student(student1);
    department.add_student(student2);
    department.add_student(student3);

    cout << "Number of students below 3.0 GPA: " << department.below_GPA(3.0) << endl;
    cout << "Students above 3.5 GPA: " << endl;
    department.above_GPA(3.5);
    return 0;
}
