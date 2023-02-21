#include <iostream>
#include "parallelogram.h"


Parallelogram::Parallelogram(int sides, int side_a, int side_b, int side_c,
    int side_d, int angle_A, int angle_B, int angle_C,
    int angle_D)
    : Quadrangle(0, 0, 0, 0, 0, 0, 0, 0, 0) {
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
void Parallelogram::print_name() { std::cout << name << std::endl; }
bool Parallelogram::check() {
    if (Quadrangle::check() && (angle_A == angle_C && angle_B == angle_D) &&
        (side_a == side_c && side_b == side_d))
        return true;
    else
        return false;
}
