#include "Student.h"

int namecomp(Student a, Student b) {
    if (a.getname() < b.getname()) return -1;
    if (a.getname() == b.getname()) return 0;
    return 1;
}

int mathcomp(Student a, Student b) {
    if (a.getmath() < b.getmath()) return -1;
    if (a.getmath() == b.getmath()) return 0;
    return 1;
}

int englishcomp(Student a, Student b) {
    if (a.getenglish() < b.getenglish()) return -1;
    if (a.getenglish() == b.getenglish()) return 0;
    return 1;
}

int historycomp(Student a, Student b) {
    if (a.gethistory() < b.gethistory()) return -1;
    if (a.gethistory() == b.gethistory()) return 0;
    return 1;
}

int mediecomp(Student a, Student b) {
    if (a.getmedie() < b.getmedie()) return -1;
    if (a.getmedie() == b.getmedie()) return 0;
    return 1;
}
