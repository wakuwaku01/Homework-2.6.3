#pragma once
#include "figure.h"
#include <string>

class Triangle : public Figure {
private:
    std::string name = "Треугольник:";
protected:
    int sides;
    int side_a, side_b, side_c;
    int angle_A, angle_B, angle_C;
public:
    Triangle(int sides, int side_a, int side_b, int side_c, int angle_A,
        int angle_B, int angle_C);
    bool check();
    void print_name();
    void print_sides();
    void print_angles();
};

