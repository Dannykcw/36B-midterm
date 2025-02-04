// Box.h
#ifndef BOX_H
#define BOX_H
#include <iostream>
class Box
{
private:
    double length{1.0};
    double width{1.0};
    double height{1.0};

public:
    // Constructors
    Box(double lengthValue, double widthValue, double heightValue);
    Box(); // No-arg constructor
    // Accessors
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    double volume(); // Function to calculate the volume of a box
    Box operator*(const int n) const;
};

std::ostream &operator<<(std::ostream &stream, const Box &box);
#endif