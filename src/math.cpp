#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>  // for std::setprecision


/*
A list of other popular Math functions (from the <cmath> library) can be found in the table below:

Function	Description
abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x
asin(x)	Returns the arcsine of x
atan(x)	Returns the arctangent of x
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x
cosh(x)	Returns the hyperbolic cosine of x
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x)	Returns the hyperbolic tangent of a double value

*/


int main() {
    // Basic math functions
    std::cout << "abs(-5.5): " << std::abs(-5.5) << std::endl;
    std::cout << "fabs(-3.14): " << std::fabs(-3.14) << std::endl;
    std::cout << "sqrt(25): " << std::sqrt(25) << std::endl;
    std::cout << "cbrt(27): " << std::cbrt(27) << std::endl;
    
    // Rounding functions
    std::cout << "ceil(4.3): " << std::ceil(4.3) << std::endl;
    std::cout << "floor(4.7): " << std::floor(4.7) << std::endl;
    std::cout << "round(4.5): " << std::round(4.5) << std::endl;
    
    // Power and logarithmic functions
    std::cout << "pow(2, 3): " << std::pow(2, 3) << std::endl;
    std::cout << "exp(1): " << std::exp(1) << " (e^1)" << std::endl;
    std::cout << "expm1(1): " << std::expm1(1) << " (e^1 - 1)" << std::endl;
    std::cout << "log(10): " << std::log(10) << " (natural log)" << std::endl;
    std::cout << "log10(100): " << std::log10(100) << " (base 10)" << std::endl;
    
    // Trigonometric functions (angles in radians)
    const double pi = 3.14159265358979323846;
    std::cout << "sin(pi/2): " << std::sin(pi/2) << std::endl;
    std::cout << "cos(pi): " << std::cos(pi) << std::endl;
    std::cout << "tan(pi/4): " << std::tan(pi/4) << std::endl;
    
    // Inverse trigonometric functions
    std::cout << "asin(0.5): " << std::asin(0.5) * 180/pi << " degrees" << std::endl;
    std::cout << "acos(0.5): " << std::acos(0.5) * 180/pi << " degrees" << std::endl;
    std::cout << "atan(1): " << std::atan(1) * 180/pi << " degrees" << std::endl;
    
    // Hyperbolic functions
    std::cout << "sinh(1): " << std::sinh(1) << std::endl;
    std::cout << "cosh(1): " << std::cosh(1) << std::endl;
    std::cout << "tanh(1): " << std::tanh(1) << std::endl;
    
    // Other useful functions
    std::cout << "fmax(5.5, 3.2): " << std::fmax(5.5, 3.2) << std::endl;
    std::cout << "fmin(5.5, 3.2): " << std::fmin(5.5, 3.2) << std::endl;
    std::cout << "fmod(10.5, 3.2): " << std::fmod(10.5, 3.2) << " (floating-point remainder)" << std::endl;
    std::cout << "fdim(5.5, 3.2): " << std::fdim(5.5, 3.2) << " (positive difference)" << std::endl;
    std::cout << "hypot(3, 4): " << std::hypot(3, 4) << " (sqrt(3² + 4²))" << std::endl;
    std::cout << "fma(2.5, 3.5, 1.5): " << std::fma(2.5, 3.5, 1.5) << " (2.5*3.5 + 1.5)" << std::endl;
    
    return 0;
}