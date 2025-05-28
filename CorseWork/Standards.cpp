#include "Standards.h"
#include <iostream>

std::string ProjectRule::applyRule() const {
    return "Применение проектных правил.";
}
std::string InstitutionRule::applyRule() const {
    return "Применение институциональных правил.";
}

RuleManager::RuleManager(std::unique_ptr<RuleStrategy> s) : strategy(std::move(s)) {}
void RuleManager::setStrategy(std::unique_ptr<RuleStrategy> s) {
    strategy = std::move(s);
}
std::string RuleManager::applyRule() const {
    return strategy->applyRule();
}