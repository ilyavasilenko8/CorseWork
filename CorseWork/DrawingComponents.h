#pragma once
#include <memory>
#include <vector>
#include <string>

class DrawingComponent {
public:
    virtual ~DrawingComponent() = default;
    virtual void display() const = 0;
    virtual double getCost() const = 0;
};

class Specification : public DrawingComponent {
private:
    std::string description;
public:
    Specification(const std::string& desc);
    void display() const override;
    double getCost() const override;
};

class Geometry : public DrawingComponent {
private:
    std::string type;
public:
    Geometry(const std::string& t);
    void display() const override;
    double getCost() const override;
};

class Material : public DrawingComponent {
private:
    std::string materialType;
    double cost;
public:
    Material(const std::string& type, double c);
    void display() const override;
    double getCost() const override;
};

class LoopDecorator : public DrawingComponent {
protected:
    std::unique_ptr<DrawingComponent> component;
public:
    LoopDecorator(std::unique_ptr<DrawingComponent> comp);
    void display() const override;
    double getCost() const override;
};

class Loop : public LoopDecorator {
private:
    int loopCount;
public:
    Loop(std::unique_ptr<DrawingComponent> comp, int count);
    void display() const override;
    double getCost() const override;
};

class Drawing : public DrawingComponent {
private:
    std::vector<std::unique_ptr<DrawingComponent>> components;
public:
    void addComponent(std::unique_ptr<DrawingComponent> component);
    void display() const override;
    double getCost() const override;
};