#include <iostream>
#include <stdexcept>
#include <string>

class MyException :public std::logic_error {
public:
    MyException(int code, const std::string& msg) 
        : std::logic_error(msg), err_code(code) {}

    int getErrCode() const {
        return err_code;
    }

    const char* what() const noexcept override {
        std::string* out = new std::string("The error code is ");
        out->append(std::to_string(getErrCode()));
        out->append("\n");
        out->append(std::logic_error::what());

        return out->c_str();
    }


private:
    int err_code;
};

class Fraction {
public:
    Fraction(int n=1, int d=1) : num(n), den(d) {
    }

    int quotient() const {
        if (den == 0) {
            throw std::runtime_error("Denominator cannot be zero");
        }
        
        // if the fraction is negative, throw logic error
        if ((num < 0 && den > 0) || (num > 0 && den < 0)) {
            throw std::logic_error("Fraction cannot be negative");
        }

        if (num / den > 100) {
            throw MyException(11, "The quotient is greater than 100");
        }

        return num/den;
    }

private:
int num, den;

};



int main() {
    int n1, n2;
    std::cout << "enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);

    try {
        std::cout << f1.quotient() << std::endl;
        std::cout << "end of try" << std::endl;
    }
    catch (const MyException& ex) {
        std::cout << "MyException exception caught" << ex.what() << std::endl;
        
    }
    catch (const std::logic_error& ex) {
        std::cout << "Logic error exception caught" << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Base class exception caught" << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Other exception" << std::endl;
    }

    std::cout << "End of the program" << std::endl;
    return 0;
}
