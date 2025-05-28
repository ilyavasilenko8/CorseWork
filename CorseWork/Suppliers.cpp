#include "Suppliers.h"
#include <iostream>

Suppliers::Suppliers(const std::string& n) : name(n) {}
std::unique_ptr<Material> Suppliers::supplyMaterial(const std::string& type, double cost) {
    std::cout << name << " поставляет материал: " << type << "\n";
    return std::make_unique<Material>(type, cost);
}