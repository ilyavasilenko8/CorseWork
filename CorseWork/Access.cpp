#include "Access.h"
#include <iostream>

Access::Access() {}
Access* Access::instance = nullptr;
Access* Access::getInstance() {
    if (!instance) {
        instance = new Access();
    }
    return instance;
}
void Access::startSpecification() {
    std::cout << "������: ������ �������� ������������.\n" << std::flush;
}