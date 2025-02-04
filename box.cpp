#include "Box.h"

// Constructor definition
Box::Box(double lengthValue, double widthValue, double heightValue)
{
    std::cout << "Box constructor called." << std::endl;
    length = lengthValue;
    width = widthValue;
    height = heightValue;
}
Box::Box() {} // No-arg constructor
// Function to calculate the volume of a box
double Box::volume()
{
    return length * width * height;
}

Box Box::operator*(int n) const
{

    Box temp(this->length * n, this->width * n, this->height * n);
    return temp;
}

std::ostream &operator<<(std::ostream &stream, const Box &box)
{
    stream << "Box: " << box.getLength() << "," << box.getWidth() << "," << box.getHeight();
    return stream;
}

int main()
{
    Box box{2, 3, 4};
    std::cout << "Box is " << box << std::endl;
    unsigned n{3};
    Box newBox{box * n};
    std::cout << "After multiplying by " << n << " box is " << newBox << std::endl;
}
