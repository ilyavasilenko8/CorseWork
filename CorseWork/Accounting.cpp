#include "Accounting.h"
#include <iostream>

void AccountingDevice::accountDrawing(const Drawing& drawing) {
    std::cout << "������� ����������: ������ ������� �� ���������� "
        << drawing.getCost() << " ���.\n";
}
