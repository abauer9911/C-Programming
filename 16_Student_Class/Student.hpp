#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student{
public:

// Constructor
    Student(const std::string& n, double g);

    // get function
    static int getTotalStudents();

    void print() const;

    // set method
    static void setGraduationRequirement(double newGPA); // newGPA [2.0; 4.0]

private:
    std::string name;
    double gpa;

    static int total_students;
    static int next_id; // generate unique student id
    std::string id;
    static double goodGPA; // grad requirement


};

#endif