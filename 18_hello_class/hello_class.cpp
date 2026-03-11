#include <iostream>

class Hello {
public:
    // no arg construct
    Hello() {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    void bye() const {
        std::cout << "Bye!!!\n";
    }
private:

};

int main(void) {
    // create Hello object dynamically
    Hello* hi = new Hello;

    // call bye method
    hi->bye();

    // deallocate memory
    delete hi;

    return 0;
}

