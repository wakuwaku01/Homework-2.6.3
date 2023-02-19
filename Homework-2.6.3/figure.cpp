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

Triangle::Triangle(int sides, int side_a, int side_b, int side_c, int angle_A,
    int angle_B, int angle_C)
    : Figure::Figure(0) {
    this->sides = sides;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
}

bool Triangle::check() {
    if ((sides == 3) && (angle_A + angle_B + angle_C == 180))
        return true;
    else
        return false;
}

void Triangle::print_name() { std::cout << name << std::endl; }

void Triangle::print_sides() {
    std::cout << "Количество сторон: " << sides << std::endl;
    std::cout << "Стороны: "
        << "a=" << side_a << " "
        << "b=" << side_b << " "
        << "c=" << side_c << " " << std::endl;
}

void Triangle::print_angles() {
    std::cout << "Углы: "
        << "A=" << angle_A << " "
        << "B=" << angle_B << " "
        << "C=" << angle_C << " " << std::endl;
}

RightTriangle::RightTriangle(int sides, int side_a, int side_b, int side_c,
    int angle_A, int angle_B, int angle_C)
    : Triangle::Triangle(0, 0, 0, 0, 0, 0, 0) {
    this->sides = sides;
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_A = angle_A;
    this->angle_B = angle_B;
    this->angle_C = angle_C;
}
bool RightTriangle::check() {
    if (Triangle::check() && angle_C == 90)
        return true;
    else
        return false;
}

void RightTriangle::print_name() { std::cout << name << std::endl; }

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

Quadrangle::Quadrangle(int sides, int side_a, int side_b, int side_c,
    int side_d, int angle_A, int angle_B, int angle_C,
    int angle_D)
    : Figure::Figure(0) {
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
bool Quadrangle::check() {
    if ((sides == 4) && (angle_A + angle_B + angle_C + angle_D == 360))
        return true;
    else
        return false;
}
void Quadrangle::print_name() { std::cout << name << std::endl; }
void Quadrangle::print_sides() {
    std::cout << "Количество сторон: " << sides << std::endl;
    std::cout << "Стороны: "
        << "a=" << side_a << " "
        << "b=" << side_b << " "
        << "c=" << side_c << " "
        << "d=" << side_d << std::endl;
}
void Quadrangle::print_angles() {
    std::cout << "Углы: "
        << "A=" << angle_A << " "
        << "B=" << angle_B << " "
        << "C=" << angle_C << " "
        << "D=" << angle_D << std::endl;
}

Rectangle::Rectangle(int sides, int side_a, int side_b, int side_c, int side_d,
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
void Rectangle::print_name() { std::cout << name << std::endl; }
bool Rectangle::check() {
    if (Quadrangle::check() &&
        ((angle_A == 90 && angle_B == 90) && (angle_C == 90 && angle_D == 90)) &&
        (side_a == side_c && side_b == side_d))
        return true;
    else
        return false;
}

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

Rhombus::Rhombus(int sides, int side_a, int side_b, int side_c, int side_d,
    int angle_A, int angle_B, int angle_C, int angle_D)
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
void Rhombus::print_name() { std::cout << name << std::endl; }
bool Rhombus::check() {
    if (Quadrangle::check() && (angle_A == angle_C && angle_B == angle_D) &&
        (side_a == side_b) && (side_b == side_c) && (side_c == side_d))
        return true;
    else
        return false;
}
