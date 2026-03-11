#include <string>
#include <iostream>
#include "Student.hpp"



// Initialize static data member (REQUIRED)
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.5;

Student::Student(const std::string& n, double g) : name(n), gpa(g) {
    total_students++;
    id = "U0000" + std::to_string(next_id);
    next_id += 5;
}

int Student::getTotalStudents() {
    return total_students;
}

void canGraduate() {
    // add code here
    
}

void Student::print() const {
    std:: cout << '\n';
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can Graduate: " << (canGraduate() ? "YES" : "NO") << std::endl;
    std:: cout << '\n';
    
}

static void setGraduationRequirement(double newGPA) {
    // add code here

}