#include <iostream>
#include <vector> // vector data structure (dynamic array)

void print(const std::vector<int>& v);

int main(void) {
    //create vector
    std::vector<int> v; // empty vector of integers
    
    // create and initalize the vector
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    //provide the size and default value
    std::vector<int> v3(5, 9); // (5 elements, each set to 9)
    print(v3);

    // copy from another
    std::vector<int> v4(v2);
    print(v4);

    // get the number of elements
    std::cout << "v2 size: " << v2.size() <<std::endl;
    std::cout << "v size: " << v.size() <<std::endl;

    // first and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    //add to the end of the vector
    v2.push_back(10);
    print(v2);

    // remove the last element
    v3.pop_back();

    //interator - objects that point to certain locations in the vector
    // begin() - points to the first element in the vector
    // end() - points to the one past the last element

    std::cout << *v2.begin() << std::endl;

    // insert(location (interator), value)
    v2.insert(v2.begin() + 1, 1000);
    print(v2);

    v2.insert(v2.begin() + 6, 500);
    print(v2);
    
    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }
    std::cout << "\n";
}