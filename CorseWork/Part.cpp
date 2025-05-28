#include "part.h"
#include <iostream>

Details::Details(const std::string& info) : detailInfo(info) {}
void Details::display() const {
    std::cout << "Информация о детали: " << detailInfo << "\n";
}