#include <iostream>

/********************************************************
 * Author: Keaton Saunders
 * Date: 11 January 2020
 * Copyright etc.
 ********************************************************/

int main() 
{
    int favourite_number;
    std::cout << "Enter your favourite number between 1 and 100:";
    std::cin >> favourite_number;
    std::cout << "Amazing! That's my favourite number too!" << std::endl;
    std::cout << "No really. " << favourite_number << " is my favourite number too." << std::endl;
    return 0;
}
