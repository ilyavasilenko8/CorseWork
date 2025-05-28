#pragma once
#include <string>
#include <vector>

class CompatibilityObserver {
public:
    virtual ~CompatibilityObserver() = default;
    virtual void update(const std::string& message) = 0;
};

class CompatibilityCheck : public CompatibilityObserver {
private:
    std::string name;
public:
    CompatibilityCheck(const std::string& n);
    void update(const std::string& message) override;
};

class DrawingSubject {
private:
    std::vector<CompatibilityObserver*> observers;
public:
    void attach(CompatibilityObserver* observer);
    void notify(const std::string& message);
};