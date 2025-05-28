#pragma once
#include <string>
#include <memory>

class RuleStrategy {
public:
    virtual ~RuleStrategy() = default;
    virtual std::string applyRule() const = 0;
};

class ProjectRule : public RuleStrategy {
public:
    std::string applyRule() const override;
};

class InstitutionRule : public RuleStrategy {
public:
    std::string applyRule() const override;
};

class RuleManager {
private:
    std::unique_ptr<RuleStrategy> strategy;
public:
    RuleManager(std::unique_ptr<RuleStrategy> s);
    void setStrategy(std::unique_ptr<RuleStrategy> s);
    std::string applyRule() const;
};