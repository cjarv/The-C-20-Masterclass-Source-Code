//
// Created by cjarv on 11/6/2023.
//
#include <iostream>
#include <string>

int main(){
    std::string country;

    std::cout << "Where do you live?";  // user input

    std::getline(std::cin, country); // get full line with spaces

    std::cout << "I've heard great things about " \
        << country \
        << ". I'd like to go sometime." \
        << std::endl;  // completed sentence

    return 0;
}
