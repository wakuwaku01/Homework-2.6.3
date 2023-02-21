#pragma once
#include "triangle.h"


class EquilateralTriangle : public Triangle {
private:
    std::string name = "Равносторонний треугольник:";
public:
    EquilateralTriangle(int sides, int side_a, int side_b, int side_c,
        int angle_A, int angle_B, int angle_C);
    bool check();
    void print_name();
};