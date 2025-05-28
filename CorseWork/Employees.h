#pragma once
#include <string>
#include "DrawingComponents.h"

class Employee {
private:
    std::string name;
public:
    Employee(const std::string& n);
    void approveDrawing(const Drawing& drawing);
};