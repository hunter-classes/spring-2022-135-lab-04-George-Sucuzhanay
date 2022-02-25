#include <iostream>
#include <string>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height)
{
    std::string result = "";
    bool row; 
    bool col = true;
    for(int  i =0; i < height; i++){
        for(int j=0; j < width; j++)
        {
            if(j == 0)
            {
                row = col;
            }
            if(row == true)
            {
                result += "*";
            }
            else{
                result += " ";
            }
            if((j +1) % 3 == 0)
            {
                row = !row;
            }
        }
        if((i+1) % 3 == 0)
        {
            col = !col;
        }
        if(i < height - 1 == true){
            result += "\n";
        }
        else{
            result += "";
        }
    }
    return result;
}