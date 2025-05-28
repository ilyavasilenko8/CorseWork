#include "Observers.h"
#include <iostream>

CompatibilityCheck::CompatibilityCheck(const std::string& n) : name(n) {}
void CompatibilityCheck::update(const std::string& message) {
    std::cout << name << " получил обновление: " << message << "\n";
}

void DrawingSubject::attach(CompatibilityObserver* observer) {
    observers.push_back(observer);
}
void DrawingSubject::notify(const std::string& message) {
    for (auto observer : observers) {
        observer->update(message);
    }
}