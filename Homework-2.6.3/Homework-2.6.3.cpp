#include "figure.h"
#include "triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"
#include <iostream>
#include <string>

void print_info(Figure& figure) {
    figure.print_name();
    if (figure.check()) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    figure.print_sides();
    figure.print_angles();
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    Figure figure(0);
    print_info(figure);

    Triangle triangle(3, 10, 15, 20, 50, 60, 70);
    print_info(triangle);

    RightTriangle right_triangle(3, 10, 15, 20, 30, 60, 90);
    print_info(right_triangle);

    IsoscelesTriangle isosceles_triangle(3, 10, 15, 10, 50, 80, 50);
    print_info(isosceles_triangle);

    EquilateralTriangle equilateral_triangle(3, 20, 20, 20, 60, 60, 60);
    print_info(equilateral_triangle);

    Quadrangle quadrangle(4, 10, 15, 20, 30, 70, 80, 90, 120);
    print_info(quadrangle);

    Rectangle rectangle(4, 10, 15, 10, 15, 90, 90, 90, 90);
    print_info(rectangle);

    Square square(4, 10, 10, 10, 10, 90, 90, 90, 90);
    print_info(square);

    Parallelogram parallelogram(4, 10, 15, 10, 15, 70, 110, 70, 110);
    print_info(parallelogram);

    Rhombus rhombus(4, 20, 20, 20, 20, 70, 110, 70, 110);
    print_info(rhombus);
}