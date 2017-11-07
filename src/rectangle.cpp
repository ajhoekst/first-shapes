#include "rectangle.h"

// Implementation of the Rectangle constructor
Rectangle::Rectangle(
    double width,   // Provided width to initialize the rectangle
    double height   // Provided height to initialize the rectangle
)
{
    width_ = width;     // Save the provided width to the object's memory
    height_ = height;   // Save the provided height to the object's memory
}

// Implementation of the Rectangle area function
double Rectangle::area()
{
    // Area of a rectangle is defined by the width times the height
    return width_ * height_;
}
