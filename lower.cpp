#include <iostream>
#include "lower.h"
#include <string>

std::string lower(int length)
{
    std::string result = "";
    for(int i =0; i < length; i++)
    {
        for(int j=0; j < i + 1; j++){
            result += "*";
        }
        result += "\n";

    }
    return result;
}