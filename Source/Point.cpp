#include <Point.h>
#include <iostream>
#include <format>
#include <vector>
// #include <hash_map>

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point &self) const // its looking at it self
{
    return x == self.x && y == self.y;
    // takes two value and see if they match and returns true and false
}

int Point::hash_code()
{
    return (x * 3) + (y * 5);
}

std::string Point::to_string()
{
    // we want to return this as string (x,y)
    std::string coords = std::format("({},{})", x, y);
    return coords;
}

std::vector<Point> Point::neighbours()
/*
this finds the titles around the current point 
and helps to find where it can move to? if that makes sence?
*/
{
    return {
        {x - 1, y - 1},
        {x - 1, y},
        {x - 1, y + 1},
        {x, y - 1},
        {x, y + 1},
        {x + 1, y - 1},
        {x + 1, y},
        {x + 1, y + 1}
    };
}

Point::~Point() {};