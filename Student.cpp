#include "Student.h"

void Student::setname(const char* name) {
    this->nume = name;
}

std::string Student::getname() {
    return nume;
}

void Student::setmath(int x) {
    mate = x;
}
int Student::getmath() {
    return mate;
}

void Student::setenglish(int x) {
    english = x;
}
int Student::getenglish() {
    return english;
}

void Student::sethistory(int x) {
    history = x;
}
int Student::gethistory() {
    return history;
}

double Student::getmedie() {
    return (mate + english + history) / 3.0;
}
