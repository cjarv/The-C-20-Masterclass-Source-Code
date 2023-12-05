//
// Created by cjarv on 11/8/2023.
//

#include <iostream>
#include <cmath>

double celsius_to_fahrenheit(double celsius){
    double fahrenheit = ((9.0 / 5) * celsius) + 32;
    return fahrenheit;
}

int main(){
    double degrees{};
    double fahrenheit{};

    std::cout << "Please enter a degree value in Celsius :" << std::endl;
    std::cin >> degrees;  // user input avoiding spaces
    fahrenheit = celsius_to_fahrenheit(degrees);
    std::cout << degrees << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;  // Prints Fahrenheit response

    return 0;
};
