



/*
DesignBureau::DesignBureau()
    : checker("Checker1"), subject(), supplier(""), employee(""), accounting(),
    ruleManager(std::make_unique<ProjectRule>()), size(0.0, 0.0),
    access(Access::getInstance()), details("") {
    if (!access) {
        std::cerr << "Error: Access::getInstance() returned nullptr!\n";
        exit(1);
    }
    subject.attach(&checker);
    factory = std::make_unique<ConcreteDrawingFactory>();
    drawing = std::make_unique<Drawing>();
}

void DesignBureau::startProcess() {
    std::cout << "\n=== Запуск процесса проектирования ===\n\n";

    // Ввод размеров детали
    std::cout << "=== Ввод параметров детали ===\n";
    double width, height;

    std::cout << "Введите ширину детали: ";
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для ширины: ";
    }
    std::cout << "Ширина установлена: " << width << " мм\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера

    std::cout << "Введите высоту детали: ";
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для высоты: ";
    }
    std::cout << "Высота установлена: " << height << " мм\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера

    size = Size(width, height);

    // Ввод информации о материале
    std::cout << "\n=== Ввод данных о материалах ===\n";
    std::string materialType;
    double materialCost;

    std::cout << "Введите тип материала: ";
    std::getline(std::cin, materialType);
    if (materialType.empty()) materialType = "Не указано";
 

    std::cout << "Введите стоимость материала (за ед.): ";
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для стоимости: ";
    }
    std::cout << "Стоимость материала: " << materialCost << " руб.\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера

    // Ввод контактной информации
    std::cout << "\n=== Ввод контактной информации ===\n";
    std::string supplierName;
    std::cout << "Введите имя поставщика материала: ";
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) supplierName = "Не указано";
    std::cout << "Поставщик: " << supplierName << "\n";
    supplier = Suppliers(supplierName);

    std::string employeeName;
    std::cout << "Введите имя ответственного сотрудника: ";
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) employeeName = "Не указано";
    std::cout << "Ответственный: " << employeeName << "\n";
    employee = Employee(employeeName);

    // Ввод информации о детали
    std::cout << "\n=== Описание детали ===\n";
    std::string detailInfo;
    std::cout << "Введите описание детали: ";
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) detailInfo = "Не указано";
    std::cout << "Описание: " << detailInfo << "\n";
    details = Details(detailInfo);

    // Процесс создания чертежа
    std::cout << "\n=== Процесс создания чертежа ===\n";

    std::cout << "1. Инициализация спецификации...\n";
    access->startSpecification();

    std::cout << "2. Создание спецификации 'Главная сборка'...\n";
    auto spec = factory->createSpecification("Главная сборка");
    drawing->addComponent(std::move(spec));

    std::cout << "3. Проектирование 3D геометрии...\n";
    auto geo = factory->createGeometry("3D модель");
    drawing->addComponent(std::move(geo));

    std::cout << "4. Выбор основного материала (" << materialType << ")...\n";
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    std::cout << "5. Добавление дополнительного материала (Алюминий)...\n";
    auto additionalMat = supplier.supplyMaterial("Алюминий", 30.0);
    drawing->addComponent(std::move(additionalMat));

    std::cout << "6. Проверка совместимости компонентов...\n";
    subject.notify("Чертёж обновлён с новым материалом.");

    std::cout << "7. Применение проектных стандартов:\n";
    std::cout << "   - " << ruleManager.applyRule() << "\n";
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "   - " << ruleManager.applyRule() << " (институциональные правила)\n";

    std::cout << "8. Процедура одобрения чертежа...\n";
    employee.approveDrawing(*drawing);

    std::cout << "9. Учёт чертежа в системе...\n";
    accounting.accountDrawing(*drawing);

    // Итоговая информация
    std::cout << "\n=== Итоговая информация ===\n";
    std::cout << "Размеры детали:\n";
    size.display();

    std::cout << "\nVIA-данные:\n";
    VData viaData;
    viaData.displayData(*drawing);

    std::cout << "\nПолное описание:\n";
    details.display();

    std::cout << "\n=== Процесс завершен успешно ===\n\n";
}
*/







/*DesignBureau::DesignBureau()
    : checker("Checker1"), subject(), supplier(""), employee(""), accounting(),
    ruleManager(std::make_unique<ProjectRule>()), size(0.0, 0.0),
    access(Access::getInstance()), details("") {
    if (!access) {
        std::cerr << "Error: Access::getInstance() returned nullptr!\n";
        exit(1);
    }
    subject.attach(&checker);
    factory = std::make_unique<ConcreteDrawingFactory>();
    drawing = std::make_unique<Drawing>();
}

void DesignBureau::startProcess() {
    std::cout << "\n=== Запуск процесса проектирования ===\n\n";

    // Ввод размеров детали
    std::cout << "=== Ввод параметров детали ===\n";
    double width, height;

    std::cout << "Введите ширину детали: ";
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для ширины: ";
    }
    std::cout << "Ширина установлена: " << width << " мм\n";

    std::cout << "Введите высоту детали: ";
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для высоты: ";
    }
    std::cout << "Высота установлена: " << height << " мм\n";

    size = Size(width, height);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    
    std::cout << "\n=== Ввод данных о материалах ===\n";
    std::string materialType;
    double materialCost;

    std::cout << "Введите тип материала: ";
    std::getline(std::cin, materialType);
    if (materialType.empty()) materialType = "Не указано";
    std::cout << "Тип материала: " << materialType << "\n";

    std::cout << "Введите стоимость материала (за ед.): ";
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для стоимости: ";
    }
    std::cout << "Стоимость материала: " << materialCost << " руб.\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

  
    std::cout << "\n=== Ввод контактной информации ===\n";
    std::string supplierName;
    std::cout << "Введите имя поставщика материала: ";
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) supplierName = "Не указано";
    std::cout << "Поставщик: " << supplierName << "\n";
    supplier = Suppliers(supplierName);

    std::string employeeName;
    std::cout << "Введите имя ответственного сотрудника: ";
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) employeeName = "Не указано";
    std::cout << "Ответственный: " << employeeName << "\n"; // Исправлено: добавлен employeeName
    employee = Employee(employeeName);

    // Ввод информации о детали
    std::cout << "\n=== Описание детали ===\n";
    std::string detailInfo;
    std::cout << "Введите описание детали: ";
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) detailInfo = "Не указано";
    std::cout << "Описание: " << detailInfo << "\n"; // Исправлено: добавлен detailInfo
    details = Details(detailInfo);

    // Процесс создания чертежа
    std::cout << "\n=== Процесс создания чертежа ===\n";

    std::cout << "1. Инициализация спецификации...\n";
    access->startSpecification();

    std::cout << "2. Создание спецификации 'Главная сборка'...\n";
    auto spec = factory->createSpecification("Главная сборка");
    drawing->addComponent(std::move(spec));

    std::cout << "3. Проектирование 3D геометрии...\n";
    auto geo = factory->createGeometry("3D модель");
    drawing->addComponent(std::move(geo));

    std::cout << "4. Выбор основного материала (" << materialType << ")...\n";
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    std::cout << "5. Добавление дополнительного материала (Алюминий)...\n";
    auto additionalMat = supplier.supplyMaterial("Алюминий", 30.0);
    drawing->addComponent(std::move(additionalMat));

    std::cout << "6. Проверка совместимости компонентов...\n";
    subject.notify("Чертёж обновлён с новым материалом.");

    std::cout << "7. Применение проектных стандартов:\n";
    std::cout << "   - " << ruleManager.applyRule() << "\n";
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "   - " << ruleManager.applyRule() << " (институциональные правила)\n";

    std::cout << "8. Процедура одобрения чертежа...\n";
    employee.approveDrawing(*drawing);

    std::cout << "9. Учёт чертежа в системе...\n";
    accounting.accountDrawing(*drawing);

    // Итоговая информация
    std::cout << "\n=== Итоговая информация ===\n";
    std::cout << "Размеры детали:\n";
    size.display();

    std::cout << "\nVIA-данные:\n";
    VIData viaData;
    viaData.displayData(*drawing);

    std::cout << "\nПолное описание:\n";
    details.display();

    std::cout << "\n=== Процесс завершен успешно ===\n\n";
}

*/














/*
DesignBureau::DesignBureau()
    : checker("Checker1"), subject(), supplier(""), employee(""), accounting(),
    ruleManager(std::make_unique<ProjectRule>()), size(0.0, 0.0),
    access(Access::getInstance()), details("")
{
    if (!access) {
        std::cerr << "Error: Access::getInstance() returned nullptr!\n";
        exit(1);
    }
    subject.attach(&checker);
    factory = std::make_unique<ConcreteDrawingFactory>();
    drawing = std::make_unique<Drawing>();
}

void DesignBureau::startProcess() {
    std::cout << "\n=== Запуск процесса проектирования ===\n\n";

    // Ввод размеров детали
    std::cout << "=== Ввод параметров детали ===\n";
    double width, height;

    std::cout << "Введите ширину детали: ";
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для ширины: ";
    }
    std::cout << "Ширина установлена: " << width << " мм\n";

    std::cout << "Введите высоту детали: ";
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для высоты: ";
    }
    std::cout << "Высота установлена: " << height << " мм\n";
    size = Size(width, height);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Ввод информации о материале
    std::cout << "\n=== Ввод данных о материалах ===\n";
    std::string materialType;
    double materialCost;

    std::cout << "Введите тип материала: ";
    std::getline(std::cin, materialType);
    if (materialType.empty()) materialType = "Не указано";
    std::cout << "Тип материала: " << materialType << "\n";

    std::cout << "Введите стоимость материала (за ед.): ";
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Пожалуйста, введите числовое значение для стоимости: ";
    }
    std::cout << "Стоимость материала: " << materialCost << " руб.\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Ввод информации о поставщике и сотруднике
    std::cout << "\n=== Ввод контактной информации ===\n";
    std::string supplierName;
    std::cout << "Введите имя поставщика материала: ";
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) supplierName = "Не указано";
    std::cout << "Поставщик: " << supplierName << "\n";
    supplier = Suppliers(supplierName);

    std::string employeeName;
    std::cout << "Введите имя ответственного сотрудника: ";
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) employeeName = "Не указано";
    std::cout << "Ответственный: " << employeeName << "\n";
    employee = Employee(employeeName);

    // Ввод информации о детали
    std::cout << "\n=== Описание детали ===\n";
    std::string detailInfo;
    std::cout << "Введите описание детали: ";
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) detailInfo = "Не указано";
    std::cout << "Описание: " << detailInfo << "\n";
    details = Details(detailInfo);

    // Процесс создания чертежа
    std::cout << "\n=== Процесс создания чертежа ===\n";

    std::cout << "1. Инициализация спецификации...\n";
    access->startSpecification();

    std::cout << "2. Создание спецификации 'Главная сборка'...\n";
    auto spec = factory->createSpecification("Главная сборка");
    drawing->addComponent(std::move(spec));

    std::cout << "3. Проектирование 3D геометрии...\n";
    auto geo = factory->createGeometry("3D модель");
    drawing->addComponent(std::move(geo));

    std::cout << "4. Выбор основного материала (" << materialType << ")...\n";
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    std::cout << "5. Добавление дополнительного материала (Алюминий)...\n";
    auto additionalMat = supplier.supplyMaterial("Алюминий", 30.0);
    drawing->addComponent(std::move(additionalMat));

    std::cout << "6. Проверка совместимости компонентов...\n";
    subject.notify("Чертёж обновлён с новым материалом.");

    std::cout << "7. Применение проектных стандартов:\n";
    std::cout << "   - " << ruleManager.applyRule() << "\n";
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "   - " << ruleManager.applyRule() << " (институциональные правила)\n";

    std::cout << "8. Процедура одобрения чертежа...\n";
    employee.approveDrawing(*drawing);

    std::cout << "9. Учёт чертежа в системе...\n";
    accounting.accountDrawing(*drawing);

    // Итоговая информация
    std::cout << "\n=== Итоговая информация ===\n";
    std::cout << "Размеры детали:\n";
    size.display();

    std::cout << "\nVIA-данные:\n";
    VIData viaData;
    viaData.displayData(*drawing);

    std::cout << "\nПолное описание:\n";
    details.display();

    std::cout << "\n=== Процесс завершен успешно ===\n\n";
}
*/



















/*#include "DesignBureau.h"
#include <iostream>
#include <string>
#include <limits>

DesignBureau::DesignBureau()
    : checker("Checker1"), subject(), supplier(""), employee(""), accounting(),
    ruleManager(std::make_unique<ProjectRule>()), size(0.0, 0.0), access(Access::getInstance()),
    details("") {
    if (!access) {
        std::cerr << "Error: Access::getInstance() returned nullptr!\n";
        exit(1); // Exit on error
    }
    subject.attach(&checker);
    factory = std::make_unique<ConcreteDrawingFactory>();
    drawing = std::make_unique<Drawing>();
}

void DesignBureau::startProcess() {
    std::cout << "Запуск метода startProcess.\n" << std::flush;

    // Ввод размеров детали
    double width, height;
    std::cout << "Введите ширину детали: " << std::flush;
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Введите число для ширины: " << std::flush;
    }
    std::cout << "Введённая ширина: " << width << "\n" << std::flush;

    std::cout << "Введите высоту детали: " << std::flush;
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Введите число для высоты: " << std::flush;
    }
    std::cout << "Введённая высота: " << height << "\n" << std::flush;
    size = Size(width, height);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Ввод информации о материале
    std::string materialType;
    double materialCost;

    std::cout << "Введите тип материала: " << std::flush;
    std::getline(std::cin, materialType);
    if (materialType.empty()) {
        materialType = "Не указано";
    }
    std::cout << "Тип материала: " << materialType << "\n" << std::flush;

    std::cout << "Введите стоимость материала: " << std::flush;
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка! Введите число для стоимости: " << std::flush;
    }
    std::cout << "Стоимость материала: " << materialCost << "\n" << std::flush;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Ввод поставщика
    std::string supplierName;
    std::cout << "Введите имя поставщика материала: " << std::flush;
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) {
        supplierName = "Не указано";
    }
    std::cout << "Поставщик: " << supplierName << "\n" << std::flush;
    supplier = Suppliers(supplierName);

    // Ввод сотрудника
    std::string employeeName;
    std::cout << "Введите имя сотрудника, выполняющего работу: " << std::flush;
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) {
        employeeName = "Не указано";
    }
    std::cout << "Сотрудник: " << employeeName << "\n" << std::flush;
    employee = Employee(employeeName);

    // Ввод информации о детали
    std::string detailInfo;
    std::cout << "Введите описание детали: " << std::flush;
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) {
        detailInfo = "Не указано";
    }
    std::cout << "Описание детали: " << detailInfo << "\n" << std::flush;
    details = Details(detailInfo);

    std::cout << "Запуск процесса создания чертежа.\n" << std::flush;

    // Шаг 1: Запуск спецификации
    access->startSpecification();

    // Шаг 2: Создание спецификации
    std::cout << "Создание спецификации.\n" << std::flush;
    auto spec = factory->createSpecification("Главная сборка");
    drawing->addComponent(std::move(spec));

    // Шаг 3: Проектирование геометрии
    std::cout << "Проектирование геометрии.\n" << std::flush;
    auto geo = factory->createGeometry("3D модель");
    drawing->addComponent(std::move(geo));

    // Шаг 4: Выбор материала
    std::cout << "Выбор материала.\n" << std::flush;
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    // Шаг 5: Дополнительный материал
    std::cout << "Добавление дополнительного материала.\n" << std::flush;
    auto additionalMat = supplier.supplyMaterial("Алюминий", 30.0);
    drawing->addComponent(std::move(additionalMat));

    // Шаг 6: Проверка совместимости
    std::cout << "Проверка совместимости.\n" << std::flush;
    std::cout << "Перед уведомлением...\n" << std::flush;
    subject.notify("Чертёж обновлён с новым материалом.");

    // Шаг 7: Применение правил
    std::cout << "Применение проектных правил.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "Применение институциональных правил.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;

    // Шаг 8: Одобрение чертежа
    std::cout << "Получение одобрения.\n" << std::flush;
    employee.approveDrawing(*drawing);

    // Шаг 9: Учёт чертежа
    std::cout << "Учёт чертежа.\n" << std::flush;
    accounting.accountDrawing(*drawing);

    // Шаг 10: Вывод размеров
    std::cout << "Размеры детали:\n" << std::flush;
    size.display();

    // Шаг 11: Вывод VIA-данных
    std::cout << "Данные VIA:\n" << std::flush;
    VIData viaData;
    viaData.displayData(*drawing);

    // Шаг 12: Вывод описания
    std::cout << "Описание детали:\n" << std::flush;
    details.display();
}
*/









/*void DesignBureau::startProcess() {
    std::cout << "Starting startProcess method.\n" << std::flush;

    // Input part dimensions
    double width, height;
    std::cout << "Enter part width: " << std::flush;
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for width: " << std::flush;
    }
    std::cout << "Width entered: " << width << "\n" << std::flush;
    std::cout << "Enter part height: " << std::flush;
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for height: " << std::flush;
    }
    std::cout << "Height entered: " << height << "\n" << std::flush;
    size = Size(width, height);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer

    // Input material details
    std::string materialType;
    double materialCost;
    std::cout << "Enter material type for the part: " << std::flush;
    std::getline(std::cin, materialType);
    if (materialType.empty()) {
        materialType = "Not specified";
    }
    std::cout << "Material entered: " << materialType << "\n" << std::flush;
    std::cout << "Enter material cost: " << std::flush;
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for cost: " << std::flush;
    }
    std::cout << "Cost entered: " << materialCost << "\n" << std::flush;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer

    // Input supplier name
    std::string supplierName;
    std::cout << "Enter material supplier name: " << std::flush;
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) {
        supplierName = "Not specified";
    }
    std::cout << "Supplier entered: " << supplierName << "\n" << std::flush;
    supplier = Suppliers(supplierName);

    // Input employee name
    std::string employeeName;
    std::cout << "Enter name of the employee performing the work: " << std::flush;
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) {
        employeeName = "Not specified";
    }
    std::cout << "Employee entered: " << employeeName << "\n" << std::flush;
    employee = Employee(employeeName);

    // Input part details
    std::string detailInfo;
    std::cout << "Enter part details: " << std::flush;
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) {
        detailInfo = "Not specified";
    }
    std::cout << "Part details entered: " << detailInfo << "\n" << std::flush;
    details = Details(detailInfo);

    std::cout << "Starting drawing creation process.\n" << std::flush;

    // Step 1: Start specification process
    access->startSpecification();

    // Step 2: Create specification
    std::cout << "Creating specification.\n" << std::flush;
    auto spec = factory->createSpecification("Main assembly");
    drawing->addComponent(std::move(spec));

    // Step 3: Design geometry
    std::cout << "Designing geometry.\n" << std::flush;
    auto geo = factory->createGeometry("3D model");
    drawing->addComponent(std::move(geo));

    // Step 4: Select material
    std::cout << "Selecting material.\n" << std::flush;
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    // Step 5: Supply additional material
    std::cout << "Supplying additional material.\n" << std::flush;
    auto additionalMat = supplier.supplyMaterial("Aluminum", 30.0);
    drawing->addComponent(std::move(additionalMat));

    // Step 6: Check compatibility
    std::cout << "Checking compatibility.\n" << std::flush;
    std::cout << "Before notify...\n" << std::flush;
    subject.notify("Drawing updated with new material.");

    // Step 7: Apply rules
    std::cout << "Applying project rules.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "Applying institutional rules.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;

    // Step 8: Get approval
    std::cout << "Obtaining approval.\n" << std::flush;
    employee.approveDrawing(*drawing);

    // Step 9: Record drawing
    std::cout << "Recording drawing.\n" << std::flush;
    accounting.accountDrawing(*drawing);

    // Step 10: Display size
    std::cout << "Displaying size.\n" << std::flush;
    size.display();

    // Step 11: Display VIA data
    std::cout << "Displaying VIA data.\n" << std::flush;
    VIData viaData;
    viaData.displayData(*drawing);

    // Step 12: Display details
    std::cout << "Displaying details.\n" << std::flush;
    details.display();
}*/

/*void DesignBureau::startProcess() {
    std::cout << "Starting startProcess method.\n" << std::flush;

    // Input part dimensions
    double width, height;
    std::cout << "Enter part width: " << std::flush;
    while (!(std::cin >> width)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for width: " << std::flush;
    }
    std::cout << "Width entered: " << width << "\n" << std::flush;

    std::cout << "Enter part height: " << std::flush;
    while (!(std::cin >> height)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for height: " << std::flush;
    }
    std::cout << "Height entered: " << height << "\n" << std::flush;
    size = Size(width, height);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка перед getline

    // Input material details
    std::string materialType;
    double materialCost;

    std::cout << "Enter material type for the part: " << std::flush;
    std::getline(std::cin, materialType);
    if (materialType.empty()) {
        materialType = "Not specified";
    }
    std::cout << "Material entered: " << materialType << "\n" << std::flush;

    std::cout << "Enter material cost: " << std::flush;
    while (!(std::cin >> materialCost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error! Enter a number for cost: " << std::flush;
    }
    std::cout << "Cost entered: " << materialCost << "\n" << std::flush;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка перед getline

    // Input supplier name
    std::string supplierName;
    std::cout << "Enter material supplier name: " << std::flush;
    std::getline(std::cin, supplierName);
    if (supplierName.empty()) {
        supplierName = "Not specified";
    }
    std::cout << "Supplier entered: " << supplierName << "\n" << std::flush;
    supplier = Suppliers(supplierName);

    // Input employee name
    std::string employeeName;
    std::cout << "Enter name of the employee performing the work: " << std::flush;
    std::getline(std::cin, employeeName);
    if (employeeName.empty()) {
        employeeName = "Not specified";
    }
    std::cout << "Employee entered: " << employeeName << "\n" << std::flush;
    employee = Employee(employeeName);

    // Input part details
    std::string detailInfo;
    std::cout << "Enter part details: " << std::flush;
    std::getline(std::cin, detailInfo);
    if (detailInfo.empty()) {
        detailInfo = "Not specified";
    }
    std::cout << "Part details entered: " << detailInfo << "\n" << std::flush;
    details = Details(detailInfo);

    std::cout << "Starting drawing creation process.\n" << std::flush;

    // Step 1: Start specification process
    access->startSpecification();

    // Step 2: Create specification
    std::cout << "Creating specification.\n" << std::flush;
    auto spec = factory->createSpecification("Main assembly");
    drawing->addComponent(std::move(spec));

    // Step 3: Design geometry
    std::cout << "Designing geometry.\n" << std::flush;
    auto geo = factory->createGeometry("3D model");
    drawing->addComponent(std::move(geo));

    // Step 4: Select material
    std::cout << "Selecting material.\n" << std::flush;
    auto mat = supplier.supplyMaterial(materialType, materialCost);
    auto loopedMat = std::make_unique<Loop>(std::move(mat), 3);
    drawing->addComponent(std::move(loopedMat));

    // Step 5: Supply additional material
    std::cout << "Supplying additional material.\n" << std::flush;
    auto additionalMat = supplier.supplyMaterial("Aluminum", 30.0);
    drawing->addComponent(std::move(additionalMat));

    // Step 6: Check compatibility
    std::cout << "Checking compatibility.\n" << std::flush;
    std::cout << "Before notify...\n" << std::flush;
    subject.notify("Drawing updated with new material.");

    // Step 7: Apply rules
    std::cout << "Applying project rules.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;
    ruleManager.setStrategy(std::make_unique<InstitutionRule>());
    std::cout << "Applying institutional rules.\n" << std::flush;
    std::cout << ruleManager.applyRule() << "\n" << std::flush;

    // Step 8: Get approval
    std::cout << "Obtaining approval.\n" << std::flush;
    employee.approveDrawing(*drawing);

    // Step 9: Record drawing
    std::cout << "Recording drawing.\n" << std::flush;
    accounting.accountDrawing(*drawing);

    // Step 10: Display size
    std::cout << "Displaying size.\n" << std::flush;
    size.display();

    // Step 11: Display VIA data
    std::cout << "Displaying VIA data.\n" << std::flush;
    VIData viaData;
    viaData.displayData(*drawing);

    // Step 12: Display details
    std::cout << "Displaying details.\n" << std::flush;
    details.display();
}
*/