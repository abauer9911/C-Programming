// to do 
// create a vector of ints
// push_back 10 vals

#include "MyVector.hpp"

int main(void) {
    MyVector<int> mv;
    MyVector<std::string> mv2;

    for (int i = 0; i < 10; i++) {
        mv.push_back(i);
        mv2.push_back("hi");
    }

    mv.print();
    mv2.print();


    return 0;
}