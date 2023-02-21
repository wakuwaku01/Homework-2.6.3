#include "figure.h"
#include <iostream>
#include <string>

Figure::Figure(int sides) { this->sides = sides; }
void Figure::print_name() { std::cout << name << std::endl; }
void Figure::print_sides() {
    std::cout << "Количество сторон: " << sides << std::endl;
}
void Figure::print_angles() {}
bool Figure::check() {
    if (sides == 0) {
        return true;
    }
    else {
        return false;
    }
}
