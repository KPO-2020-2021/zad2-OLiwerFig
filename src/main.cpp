#include <iostream>
#include "BazaTestu.hh"
#include <fstream>
#include "Statystyki.hh"
using namespace std;



int main(int argc, char **argv)
{


  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }



  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona wynik, obliczone;
  Statystyka stat = {0,0,0};

  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
std::cout<<"jaki wynik ma: "<<WyrZ_PytanieTestowe<<endl;
std::cout<<"twoja odpowiedz to: "<<endl;
for(int i=0; i<3; i++)
{

    std::cin>>wynik;
    if(std::cin.good())
        {
            break;
        }
        std::cin.clear();
        std::cin.ignore(1024,'\n');
}
stat.Wszystkie++;
obliczone=Oblicz(WyrZ_PytanieTestowe);
if(wynik==obliczone)
{
    std::cout<<"dobrze"<<std::endl;
    stat.Poprawne++;
}
else
{
    std::cout<<"zle poprawna odpowiedz to: "<<obliczone<<std::endl;
      stat.Bledne++;
}

  }
 Wyswietl(stat);


  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
