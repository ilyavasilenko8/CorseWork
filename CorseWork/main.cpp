#include <windows.h>
#include "DesignBureau.h"
#include <iostream>
#include <locale>
#include <codecvt>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::locale::global(std::locale("")); // ��������� ������ �������
    std::wcin.imbue(std::locale());
    std::wcout.imbue(std::locale());

    std::cout << "��������� ��������.\n";

    // ����� �������� ������
    DesignBureau bureau;
    bureau.startProcess();

    std::cin.get();
    return 0;
}
