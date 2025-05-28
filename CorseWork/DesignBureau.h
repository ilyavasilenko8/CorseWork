#pragma once
#include "drawing_template.h"
#include "DrawingComponents.h"
#include "Suppliers.h"
#include "Employees.h"
#include "Accounting.h"
#include "Observers.h"
#include "Standards.h"
#include "Access.h"
#include "Size.h"
#include "analytics.h"
#include "Part.h"

class DesignBureau {
public:
    DesignBureau();
    void startProcess();

private:
    std::unique_ptr<DrawingFactory> factory;
    std::unique_ptr<Drawing> drawing;
    Suppliers supplier;
    Employee employee;
    AccountingDevice accounting;
    CompatibilityCheck checker;
    DrawingSubject subject;
    RuleManager ruleManager;
    Size size;
    Access* access;
    Details details;
};
