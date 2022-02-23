#include <iostream>
#include <string>
#include "cross.h"

std::string cross(int size)
{
    std::string line = "";
    int height = size;
    int width = size;

    for(int i =0; i < height; i++)
    {
        for(int j=0; j < width; j++)
        {
            // size - 1 account for the fact that j starts at 0 and not 1 
            // and we subtract i when we iterate
            if(i == j || j == size -1 - i)
            {
                line += "*";
            }
            else
            {
                line += " ";
            }
        }
        line+= "\n";
    }
    return line;
}