#include <iostream>
#include "trapezoid.h"
#include <string>

std::string trapezoid(int width, int height)
{
    std::string result = "";
    int spaces = 0;
    int stars = width;
    
    
    for(int i =0; i < height; i++)
    {
        if(width - i * 2 <= 0)
        {
            return "Impossible shape!\n";
        }
        for(int k=0; k < spaces; k++)
        {
            result += " ";
        }
        for(int j=0; j < stars; j++)
        {
            result += "*";
        }
        stars -= 2;
        for(int l=0; l < spaces; l++)
        {
            result += " ";
        }
        spaces++;
        result += "\n";
    }
    return result;
}
