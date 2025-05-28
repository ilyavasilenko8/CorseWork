#pragma once
#include <memory>
#include "DrawingComponents.h"
class DrawingFactory {
public:
    virtual ~DrawingFactory() = default;
    virtual std::unique_ptr<DrawingComponent> createSpecification(const std::string& desc) = 0;
    virtual std::unique_ptr<DrawingComponent> createGeometry(const std::string& type) = 0;
    virtual std::unique_ptr<DrawingComponent> createMaterial(const std::string& type, double cost) = 0;
};
class ConcreteDrawingFactory : public DrawingFactory {
   public:
        std::unique_ptr<DrawingComponent> createSpecification(const std::string& desc)override;
        std::unique_ptr<DrawingComponent> createGeometry(const std::string & type) override;
        std::unique_ptr<DrawingComponent> createMaterial(const std::string & type, double cost) override;
};