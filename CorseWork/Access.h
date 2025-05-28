#pragma once

class Access {
private:
    Access();
    static Access* instance;
public:
    static Access* getInstance();
    void startSpecification();
};