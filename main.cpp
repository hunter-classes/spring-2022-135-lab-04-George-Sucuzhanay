#include <iostream>
#include "box.h"
#include <string>
#include "checkerboard.h"

int main()
{

    std::string result;
    result = box(7,4);
    std::cout << "box(7,4):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    // more tests to show that box works fully could be added
    result = box(4,5);
    std::cout << "box(4,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 


    // Task B
    result = checkboard(11,6);
    std::cout << "checkboard(11,6): \n";
    std::cout << result;
    std::cout << "\n------------------\n"; // seperator 

    return 0;
}