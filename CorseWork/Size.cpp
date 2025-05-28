#include "size.h"
#include <iostream>

Size::Size(double w, double h) : width(w), height(h) {}
void Size::display() const {
    std::cout << "������: " << width << " x " << height << "\n";
}