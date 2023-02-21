#pragma once
#include "quadrangle.h"


class Rhombus : public Quadrangle {
private:
    std::string name = "Ромб:";
public:
    Rhombus(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};