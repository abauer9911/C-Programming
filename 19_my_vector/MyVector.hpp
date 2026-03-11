#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {
public: 
    MyVector(int capacity = 10);
    // copy constructor
    MyVector(const MyVector& other);

    // destructor
    ~MyVector();


    void print() const;
    void push_back(int val);
    int pop_back();

    bool empty() const;

    int getCapacity() const;

    int& at(int index) const;

private:
    int* elements; // dynamic array
    int size; // current number of elements
    int capacity; // max number of elements in the array

    bool full() const;
    void allocateMemory(int memory_size);

};

#endif