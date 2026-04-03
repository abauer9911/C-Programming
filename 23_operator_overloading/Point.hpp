#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point {
public:
    Point(int x = 0, int y = 0);

    // relational operators
    bool operator==(const Point& other);

    int& operator[](int index);

    bool operator!=(const Point& other);

    std::string toString() const;

    // Arithmatic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const; // todo
    Point operator-(const Point& other) const; // todo

    // Arithmatic assignment opperators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other); // todo
    Point& operator-=(const Point& other); // todo

    // Preincrement operator
    Point operator++();

    // Postincriment
    Point operator++(int);

private:
    int x, y;
};

#endif