#pragma once
#include <string>

class Student {
    std::string nume;
    int mate, english, history;

public:
    void setname(const char* name);
    std::string getname();

    void setmath(int x);
    int getmath();

    void setenglish(int x);
    int getenglish();

    void sethistory(int x);
    int gethistory();

    double getmedie();
};