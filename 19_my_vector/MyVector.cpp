#include "MyVector.hpp"
#include <iostream>

MyVector::MyVector(int capacity = 10) {
    size = 0;
    this->capacity = capacity;
    elements = new int[capacity];
}

MyVector::~MyVector() {
    delete [] elements;
}

MyVector::MyVector(const MyVector& other) {
    capacity = other.capacity;
    size = other.size;
    elements = new int[capacity];

    for (int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
}

void MyVector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]";
}

void MyVector::push_back(int val) {
    // consider the case when vector is full
    elements[size] = val;
    size++;
}
