#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>

#define EPSILON 0.01
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona
{
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */



LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  double  Skl2);
double mod2(LZespolona Skl);
LZespolona Sprzezenie(LZespolona Skl);
void Wyswietl(LZespolona Skl);
///////////////////////////////////////////////////////////////

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2);
bool  operator != (LZespolona  Skl1,  LZespolona  Skl2);
///////////////////////////////////////////////////////////////




std::ostream & operator << (std::ostream &wyj, const LZespolona &Skl);
std::istream & operator >> (std::istream &wej, LZespolona &Skl);

///////////////////////////////////////////////////////////////






#endif
