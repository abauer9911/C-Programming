#include "Student.hpp"
#include <iostream>

int main(void) {
    // Print total number of students
    std::cout << "Total students: " << Student::getTotalStudents << std::endl;

    Student s1("Mark", 3.4);
    Student s2("Anna", 3.0);
    
    s1.print();
    s2.print();

    return 0;
}