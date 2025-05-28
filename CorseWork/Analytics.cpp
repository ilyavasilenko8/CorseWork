#include "analytics.h"
#include <iostream>

void VIData::displayData(const Drawing& drawing) {
    std::cout << "Отображение данных ВИА:\n";
    drawing.display();
}