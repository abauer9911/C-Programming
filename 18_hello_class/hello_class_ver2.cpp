#include <iostream>
#include <string>

class Hello {
public:
    // no arg construct
    Hello() : size(0), messages(nullptr) {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // constructor with args
    Hello(int n) : size(n){
        std::cout << "Argument constructor for " << this << std::endl;
        messages = new std::string[size];

        for (int i = 0; i < size; i++) {
            messages[i] = (i % 2) ? "Welcome" : "Not welcome";
        }
    }

    // copy constructor
    Hello(const Hello& other) {
        std::cout << "Copy constructor for " << this << std::endl;
        size = other.size;
        // allocate new memory
        messages = new std::string[size];
        // copy values
        for (int i = 0; i < size; i++) {
            messages[i] = other.messages[i];
        }
    }

    // destructor
    ~Hello() {
        std::cout << "Destructor for " << this << std::endl;
        if (messages != nullptr) {
            delete [] messages;
        }
    }

    void bye() const {
        std::cout << "Bye!!!\n";
    }
private:
    std::string* messages;
    int size;

};

int main(void) {
    // create Hello object dynamically
    Hello* hi = new Hello;

    // call bye method
    hi->bye();

    // create an obj. using arg construct.
    Hello* hi2 = new Hello(12);

    // deallocate memory
    delete hi;
    delete hi2;


    //for (int i = 0; i < 100; i++) {
        //Hello h(999999);
    //}

    Hello hi3(10);
    Hello hi4 = hi3;

    return 0;
}

