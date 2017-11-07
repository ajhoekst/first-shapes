/* We need to tell the compiler which files contain the
 * definitions of the classes/functions we want to use
 */
// These are the files we created ourselves
#include "rectangle.h"

// These are the files others created for us
#include <iostream>

/* Each application must have only one "main" function
 * at which the program begins
 */
int main(
    int argc,   // Number of arguments passed to this application
    char** argv // List of arguments (char array) passed in
)
{
    // Create a Rectangle object
    Rectangle a(2, 3);

    // Print area of the object
    std::cout << "Area of 'a' = " << a.area() << std::endl;

    // We're done! Return ok.
    return 0;
}
