// Reading a "large" file with a while loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<fstream>
#include <iostream>
#include <string>

int main()
{
    const std::string filename = "C:/Users/Work/Desktop/LesMiserables.txt"; 
    std::ifstream fin(filename);
    
    if (!fin.is_open())
    {
        std::cout << "Unable to find file named : " << filename << "\n";
        return -1;
    }

    std::string currentLineInFile; 
    int numberOfLines = 0; 

    while (std::getline(fin, currentLineInFile))
    {
        numberOfLines++; 
        //C is the language that came before C++ (C++ is C + 1) 
        std::cout << currentLineInFile << "\n";
    }
    std::cout << "Total number of lines is: " << numberOfLines << "\n";
}

