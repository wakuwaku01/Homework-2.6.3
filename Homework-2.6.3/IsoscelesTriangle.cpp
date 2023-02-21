#include <iostream>
#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int sides, int side_a, int side_b,
    int side_c, int angle_A, int angle_B,
    int angle_C)
    : Triangle::Triangle(0, 0, 0, 0, 0, 0, 0) {
    this->sides = sides;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
}
bool IsoscelesTriangle::check() {
    if (Triangle::check() && (angle_A == angle_C) && (side_a == side_c))
        return true;
    else
        return false;
}

void IsoscelesTriangle::print_name() { std::cout << name << std::endl; }
