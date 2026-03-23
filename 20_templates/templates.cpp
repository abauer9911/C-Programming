#include <iostream>
#include <vector>
#include <string>

// Template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);

void print(bool value);

template <typename T>
T findMax(const std::vector<T>& vec);


// main

int main(void) {
    int i1 = 1, i2 = -4, i3 = -7;
    
    // call the template function
    std::cout <<smallest(i1, i2, i3) << std::endl;

    double d1 = 1.4, d2 = -4.7, d3 = -7.9;
    
    // call the template function
    std::cout <<smallest(d1, d2, d3) << std::endl;
    
    std::string s1 = "apple", s2 = "Banana", s3 = "peanut";
    
    // call the template function
    std::cout <<smallest(s1, s2, s3) << std::endl;

    // test print funct.
    int num = 123;
    bool b = (1 < 2);
    
    print(num);
    print(b);

    // findMax
    // test findMax with diff vectors
    std::vector<int> vec1 = {1, 2, 3};
    std::cout << findMax(vec1) << std::endl;

    std::vector<std::string> vec2 = {"Cat", "dog", "Hello"};
    std::cout << findMax(vec2) << std::endl;

    return 0;
}





// Definitions

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3) {
    if (n1 <= n2 && n1 <= n3) {
        return n1;
    }
    else if (n2 <= n3) {
        return n2;
    }
    else {
        return n3;
    }
}


template <typename T>
void print(const T& value) {
    std::cout << "Generic: " << value << std::endl;
}

void print(bool value) {
    std::cout << "Boolean: " << (value ? "true" : "false") << std:: endl;
}


template <typename T>
T findMax(const std::vector<T>& vec) {
    if (vec.empty()) {
        // throw an execption
        throw std::string("findMax: empty vector");
    }

    T max = vec[0];
    for (int i = 0; i > vec.size(); i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    return max;
}
