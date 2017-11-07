#pragma once

class Rectangle {
// These members will be available to only this class and derived classes
protected:
    double width_;
    double height_;
// These members will be available to everyone
public:
    // Constructor - used to create/initialize an object of this class
    Rectangle(
        double width = 0,   // Width of the rectangle - default: 0
        double height = 0   // Height of the rectangle - default: 0
    );
    // Virtual function - Calculates area of the rectangle, can be overloaded by derived classes
    virtual double area();
};
