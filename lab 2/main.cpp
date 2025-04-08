#include <iostream>
#include <iomanip>
#include "NumberList.h"
#include "globals.h"
#include "Student.h"

int main() {
    Student a, b, c;

    a.setname("Marius");
    b.setname("David");
    c.setname("Stefan");

    std::cout << "Numele elevilor este: "
        << a.getname() << ", "
        << b.getname() << ", "
        << c.getname() << '\n';

    a.setmath(6); b.setmath(4); c.setmath(7);

    int result = mathcomp(a, b);
    if (result == 1)
        std::cout << "Nota mai mare la mate o are " << a.getname() << '\n';
    else if (result == 0)
        std::cout << "Cei doi au note egale la mate.\n";
    else
        std::cout << "Nota mai mare la mate o are " << b.getname() << '\n';

    a.setenglish(7); b.setenglish(9); c.setenglish(4);
    a.sethistory(2); b.sethistory(9); c.sethistory(10);

    int medieResult = mediecomp(b, c);
    std::cout << std::fixed << std::setprecision(2);
    if (medieResult == 1)
        std::cout << "Media mai mare o are " << b.getname() << ", avand media " << b.getmedie() << '\n';
    else if (medieResult == 0)
        std::cout << "Cei doi au medii egale, avand media " << b.getmedie() << '\n';
    else
        std::cout << "Media mai mare o are " << c.getname() << ", avand media " << c.getmedie() << '\n';

    return 0;
}