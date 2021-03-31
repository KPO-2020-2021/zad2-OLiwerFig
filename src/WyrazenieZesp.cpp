#include "WyrazenieZesp.hh"


std::ostream & operator << (std::ostream &wyj, const WyrazenieZesp  &WyrZ)
{
    wyj<<WyrZ.Arg1;
    switch(WyrZ.Op)
    {
    case Op_Dodaj:
        wyj<<"+";
        break;
            case Op_Odejmij:
        wyj<<"-";
        break;
            case Op_Mnoz:
        wyj<<"*";
        break;
            case Op_Dziel:
        wyj<<"/";
        break;
    }
     wyj<<WyrZ.Arg2;
     return wyj;
}
LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
    LZespolona Wynik;
        switch(WyrZ.Op)
    {
    case Op_Dodaj:
        Wynik=WyrZ.Arg1+WyrZ.Arg2;
        break;
            case Op_Odejmij:
        Wynik=WyrZ.Arg1-WyrZ.Arg2;
        break;
            case Op_Mnoz:
       Wynik=WyrZ.Arg1*WyrZ.Arg2;
        break;
            case Op_Dziel:
         Wynik=WyrZ.Arg1/WyrZ.Arg2;
        break;
    }
    return Wynik;
}
