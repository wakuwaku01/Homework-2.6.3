#pragma once
#include "quadrangle.h"

class Rectangle : public Quadrangle {
private:
    std::string name = "Прямоугольник:";
public:
    Rectangle(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};