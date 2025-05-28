#pragma once

class Size {
private:
    double width;
    double height;
public:
    Size(double w, double h);
    void display() const;
};
