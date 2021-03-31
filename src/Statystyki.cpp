#include "Statystyki.hh"

void Wyswietl(Statystyka stat)
{
    std::cout<<"Poprawne odpowiedzi: "<<stat.Poprawne<<std::endl;
    std::cout<<"Bledne odpowiedzi: "<<stat.Bledne<<std::endl;
    std::cout<<"Poprawne odpowiedzi procentowo: "<<stat.Poprawne*100.0/stat.Wszystkie<<std::endl;
}
