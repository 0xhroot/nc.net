#ifndef COLORTEXT_H
#define COLORTEXT_H

#include <iostream>
#include <string>

std::string rainbowText(const std::string& text) 
{
    std::string rainbow;
    int numColors = 6; // Number of colors in the rainbow
    int colorIndex = 0;

    for (char c : text) 
    {
        if (c == ' ') 
        {
            rainbow += c; // Leave spaces uncolored
        } else 
        {
            rainbow += "\033[3" + std::to_string(colorIndex + 1) + "m" + c;
            colorIndex = (colorIndex + 1) % numColors;
        }
    }

    rainbow += "\033[0m"; // Reset color to default
    return rainbow;

}

#endif