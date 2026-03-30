#ifndef POINT_HPP
#define POINT_HPP

class Point {
public:
    Point(int x = 0, int y = 0);

    // relational operators
    bool operator==(const Point& other);

    int& operator[](int index);

    bool operator!=(const Point& other);

private:
    int x, y;
};

#endif