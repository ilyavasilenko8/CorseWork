#include "drawing_template.h"
#include <memory>

std::unique_ptr<DrawingComponent> ConcreteDrawingFactory::createSpecification(const std::string& desc) {
    return std::make_unique<Specification>(desc);
}
std::unique_ptr<DrawingComponent> ConcreteDrawingFactory::createGeometry(const std::string& type) {
    return std::make_unique<Geometry>(type);
}
std::unique_ptr<DrawingComponent> ConcreteDrawingFactory::createMaterial(const std::string& type, double cost) {
    return std::make_unique<Material>(type, cost);
}