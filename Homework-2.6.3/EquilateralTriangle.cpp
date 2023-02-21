#include <iostream>
#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle(int sides, int side_a, int side_b,
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
bool EquilateralTriangle::check() {
    if (Triangle::check() && ((side_a == side_b) && (side_b == side_c)) &&
        ((angle_A == angle_B) && (angle_B == angle_C)))
        return true;
    else
        return false;
}

void EquilateralTriangle::print_name() { std::cout << name << std::endl; }
