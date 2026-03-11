#include <iostream>

void countdown(int n);

int main(void) {
    countdown(10);
    
    return 0;
}

void countdown(int n) {
    if (n < 1) {
        return; // Base case
    }
    std::cout << n << " ";
    countdown(n-1); // call the same function (recursive call)
}

