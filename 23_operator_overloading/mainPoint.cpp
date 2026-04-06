#include "Point.hpp"
#include <iostream>

int main(void) {
    Point p1(3, 4);
    Point p2(5, 4);
    Point p3(81, 82);

    std::cout << "p3 " << p3.toString() << std::endl;
    
    Point p4 = p1 + p2;
    std::cout << "p4 " << p4.toString() << std::endl;
    
    int x = 1;
    (x += 2) += 5;
    std::cout << x<< std::endl;
    
    (p4 += p1) += p2;
    std::cout << "p4 " << p4.toString() << std::endl;
    
    ++p4;
    std::cout << "p4 " << p4.toString() << std::endl;
    
    p3 = p4++;
    std::cout << "p3 " << p3.toString() << std::endl;
    




    Point p5(1, 2);
    p5 *= p4;
    std::cout << "p5 " << p5.toString() << std::endl;

    Point p6(3, 4);
    p6 -= p1;
    std::cout << "p6 " << p6.toString() << std::endl;

    Point p7 = p1 * p2;
    std::cout << "p7 " << p7.toString() << std::endl;
    
    Point p8 = p1 - p2;
    std::cout << "p8 " << p8.toString() << std::endl;
    return 0;
}