#pragma once
#include <string>

class Details {
private:
    std::string detailInfo;
public:
    Details(const std::string& info);
    void display() const;
};