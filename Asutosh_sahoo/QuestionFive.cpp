#include<iostream>
#include<cmath> 

int main() {
    float radius, diameter, circumference, area;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    diameter = 2 * radius;
    circumference = 2 * M_PI * radius;
    area = M_PI * pow(radius, 2);

    std::cout << "Diameter of the circle = " << diameter << "\n";
    std::cout << "Circumference of the circle = " << circumference << "\n";
    std::cout << "Area of the circle = " << area << "\n";

    return 0;
}

