#include "Point.hpp"

Point::Point(int x, int y) : x(x), y(y) {

}

bool Point::operator==(const Point& other) {
    return (x == other.x && y == other.y);
}

int& Point::operator[](int index) {
    return(index == 0) ? x : y;
}

bool Point::operator!=(const Point& other) {
    return !(*this == other);
}

std::string Point::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

Point Point::operator-(const Point& other) const {
    return Point(x - other.x, y - other.y);
}


Point& Point::operator+=(const Point& other) {
    // // Option 1:
    // x += other.x;
    // y += other.y;

    // return *this;

    // // Option 2:
    // Point tmp(x, y);
    // Point tmp2(*this);

    // return tmp;
    // return tmp2;

    // Option 3:
    *this = *this + other;
    return *this;
}

Point Point::operator++() {
    x++;
    y++;

    return *this;
}

Point Point::operator++(int) {
    return Point(x++, y++);
}



Point& Point::operator*=(const Point& other) {
    *this = *this * other;
    return *this;
}

Point& Point::operator-=(const Point& other) {
    *this = *this - other;
    return *this;
}