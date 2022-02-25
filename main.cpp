#include <iostream>
#include "box.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "checkerboard3x3.h"
#include "trapezoid.h"
#include <string>
#include "checkerboard.h"

int main()
{

    std::string result;
    result = box(7,4);
    std::cout << "box(7,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator


    result = checkboard(11,6);
    std::cout << "checkboard(11,6): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    result = cross(8);
    std::cout << "cross(8): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    result = lower(6);
    std::cout << "lower(6): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    result = upper(5);
    std::cout << "upper(5): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = trapezoid(12,5);
    std::cout << "trapezoid(12,5): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = trapezoid(12,7);
    std::cout << "trapezoid(12,7): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    result = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16,11): \n";
    std::cout << result;
    std::cout << "\n------------------\n";

    return 0;
}