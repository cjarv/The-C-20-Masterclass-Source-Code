//
// Created by cjarv on 11/8/2023.
//

#include <iostream>
#include <cmath>

double get_base_area(double width, double length){
    double base{};
    base = width * length;
    return base;
};


double get_volume(double width, double length, double height){
    double volume;
    volume = (width * length) *height;
    return volume;
}


int main(){
    double length;
    double width;
    double height;

    std::cout << "Welcome to box calculator. Please type in length, width, height information." << std::endl;
    std::cout << "Length:";
    std::cin >> length;
    std::cout << "Width:";
    std::cin >> width;
    std::cout << "Height:";
    std::cin >> height;



    std::cout << "The base area of the box is: " << get_base_area(width, length) << std::endl;
    std::cout << "The volume of the box is: " << get_volume(width, length, height) << std::endl;

    return 0;
};