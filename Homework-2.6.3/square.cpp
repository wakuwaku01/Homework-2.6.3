#include <iostream>
#include "square.h"


Square::Square(int sides, int side_a, int side_b, int side_c, int side_d,
    int angle_A, int angle_B, int angle_C, int angle_D)
    : Quadrangle::Quadrangle(0, 0, 0, 0, 0, 0, 0, 0, 0) {
    this->sides = sides;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->side_d = side_d;
    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
    this->angle_D = angle_D;
}
void Square::print_name() { std::cout << name << std::endl; }
bool Square::check() {
    if (Quadrangle::check() && (angle_A == 90 && angle_B == 90) &&
        (angle_C == 90 && angle_D == 90) &&
        (side_a == side_b && side_b == side_c && side_c == side_d))
        return true;
    else
        return false;
}