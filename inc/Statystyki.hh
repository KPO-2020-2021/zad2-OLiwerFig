#ifndef STATYSTYKA_HH
#define STATYSTYKA_HH
#include <iostream>
struct Statystyka
{
    int Poprawne;
    int Bledne;
    int Wszystkie;
};

void Wyswietl(Statystyka stat);

#endif // STATYSTYKA_HH
