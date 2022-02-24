#include <iostream>
#include "upper.h"
#include <string>

std::string upper(int length)
{
    std::string result = "";
    int symbol = length;
    int spaces = 0;
    for(int i =0; i < length; i++)
    {
        for(int k=0; k < spaces; k++)
        {
            result += " ";
        }
        spaces++;
        for(int j=0; j < symbol; j++){
            result += "*";
            
        }
        symbol--;
        result += "\n";

    }
    return result;
}