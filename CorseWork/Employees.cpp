#include "Employees.h"
#include <iostream>

Employee::Employee(const std::string& n) : name(n) {}

void Employee::approveDrawing(const Drawing& drawing) {
    std::cout << "Чертёж одобрен сотрудником: " << name << "\n";
}