#include "DrawingComponents.h"
#include <iostream>

Specification::Specification(const std::string& desc) : description(desc) {}
void Specification::display() const {
    std::cout << "Спецификация: " << description << "\n";
}
double Specification::getCost() const { return 10.0; }

Geometry::Geometry(const std::string& t) : type(t) {}
void Geometry::display() const {
    std::cout << "Геометрия: " << type << "\n";
}
double Geometry::getCost() const { return 15.0; }

Material::Material(const std::string& type, double c) : materialType(type), cost(c) {}
void Material::display() const {
    std::cout << "Материал: " << materialType << ", Стоимость: " << cost << "\n";
}
double Material::getCost() const { return cost; }

LoopDecorator::LoopDecorator(std::unique_ptr<DrawingComponent> comp) : component(std::move(comp)) {}
void LoopDecorator::display() const {
    component->display();
}
double LoopDecorator::getCost() const {
    return component->getCost();
}

Loop::Loop(std::unique_ptr<DrawingComponent> comp, int count) : LoopDecorator(std::move(comp)), loopCount(count) {}
void Loop::display() const {
    LoopDecorator::display();
    std::cout << "Добавлено петель: " << loopCount << "\n";
}
double Loop::getCost() const {
    return LoopDecorator::getCost() + loopCount * 5.0;
}

void Drawing::addComponent(std::unique_ptr<DrawingComponent> component) {
    components.push_back(std::move(component));
}
void Drawing::display() const {
    std::cout << "=== Состав чертежа ===\n";
    for (const auto& component : components) {
        component->display();
        std::cout << "---\n";
    }
}
double Drawing::getCost() const {
    double totalCost = 0.0;
    for (const auto& component : components) {
        totalCost += component->getCost();
    }
    return totalCost;
}