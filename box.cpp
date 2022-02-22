#include <iostream>
#include <string>
#include "box.h"

// Task A:
std::string box(int width, int height)
{
    std::string result = "";
    for(int i =0; i < height; i++)
    {
        for(int j=0; j < width; j++)
        {
            result += "*";


        }
        result += "\n";        
    }

    return result;
}