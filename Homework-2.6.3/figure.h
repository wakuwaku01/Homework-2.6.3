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
