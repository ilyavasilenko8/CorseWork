#pragma once
#include <string>
#include <memory>
#include "DrawingComponents.h"

class Suppliers {
private:
    std::string name;
public:
    Suppliers(const std::string& n);
    std::unique_ptr<Material> supplyMaterial(const std::string& type, double cost);
};