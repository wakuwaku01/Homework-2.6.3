#pragma once
#include <string>

class Figure {
private:
    int sides;
    std::string name = "Фигура:";
public:
    Figure(int sides);
    virtual void print_name();
    virtual void print_sides();
    virtual void print_angles();
    virtual bool check();
};

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

class RightTriangle : public Triangle {
private:
    std::string name = "Прямоугольный треугольник:";
public:
    RightTriangle(int sides, int side_a, int side_b, int side_c, int angle_A,
        int angle_B, int angle_C);
    bool check();
    void print_name();
};

class IsoscelesTriangle : public Triangle {
private:
    std::string name = "Равнобедренный треугольник:";
public:
    IsoscelesTriangle(int sides, int side_a, int side_b, int side_c, int angle_A,
        int angle_B, int angle_C);
    bool check();
    void print_name();
};

class EquilateralTriangle : public Triangle {
private:
    std::string name = "Равносторонний треугольник:";
public:
    EquilateralTriangle(int sides, int side_a, int side_b, int side_c,
        int angle_A, int angle_B, int angle_C);
    bool check();
    void print_name();
};

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

class Rectangle : public Quadrangle {
private:
    std::string name = "Прямоугольник:";
public:
    Rectangle(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};

class Square : public Quadrangle {
private:
    std::string name = "Квадрат:";
public:
    Square(int sides, int side_a, int side_b, int side_c, int side_d, int angle_A,
        int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};

class Parallelogram : public Quadrangle {
private:
    std::string name = "Параллелограмм:";
public:
    Parallelogram(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};

class Rhombus : public Quadrangle {
private:
    std::string name = "Ромб:";
public:
    Rhombus(int sides, int side_a, int side_b, int side_c, int side_d,
        int angle_A, int angle_B, int angle_C, int angle_D);
    void print_name();
    bool check();
};