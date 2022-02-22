#include <iostream>
#include "box.h"
#include <string>

int main()
{
    // std::cout << box(1,2) << std::endl;

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


    // more code down here

    return 0;
}