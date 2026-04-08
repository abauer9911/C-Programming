#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point {
public:
    Point(int x = 0, int y = 0, const char* new_tag = nullptr);

    // destructor
    ~Point();

    // copy constructor
    Point(const Point& other);

    // relational operators
    bool operator==(const Point& other);

    int& operator[](int index);

    bool operator!=(const Point& other);

    std::string toString() const;

    // Arithmatic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;
    Point operator-(const Point& other) const;

    // Arithmatic assignment opperators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);
    Point& operator-=(const Point& other);

    // Preincrement operator
    Point operator++();

    // Postincriment
    Point operator++(int);

    // Assignment operator
    Point& operator=(const Point& other);

    friend std::istream& operator>>(std::istream& in, Point& p);
    
private:
    int x, y;
    char* tag;
};

std::ostream& operator<<(std::ostream& out, const Point& p);

#endif