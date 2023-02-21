#pragma once
#include "triangle.h"


class IsoscelesTriangle : public Triangle {
private:
    std::string name = "Равнобедренный треугольник:";
public:
    IsoscelesTriangle(int sides, int side_a, int side_b, int side_c, int angle_A,
        int angle_B, int angle_C);
    bool check();
    void print_name();
};
