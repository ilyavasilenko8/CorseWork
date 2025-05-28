#include "Accounting.h"
#include <iostream>

void AccountingDevice::accountDrawing(const Drawing& drawing) {
    std::cout << "Учетное устройство: Запись чертежа со стоимостью "
        << drawing.getCost() << " руб.\n";
}
