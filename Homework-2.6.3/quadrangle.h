#pragma once
#include "figure.h"

class Quadrangle : public Figure {
private:
    std::string name = "Четырёхугольник";
protected:
    int sides;
    int side_a, side_b, side_c, side_d;
    int angle_A, angle_B, angle_C, angle_D;

public:
    Quadrangle(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    bool check();
    void print_name();
    void print_sides();
    void print_angles();
};