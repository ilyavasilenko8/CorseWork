#include "Standards.h"
#include <iostream>

std::string ProjectRule::applyRule() const {
    return "���������� ��������� ������.";
}
std::string InstitutionRule::applyRule() const {
    return "���������� ����������������� ������.";
}

RuleManager::RuleManager(std::unique_ptr<RuleStrategy> s) : strategy(std::move(s)) {}
void RuleManager::setStrategy(std::unique_ptr<RuleStrategy> s) {
    strategy = std::move(s);
}
std::string RuleManager::applyRule() const {
    return strategy->applyRule();
}