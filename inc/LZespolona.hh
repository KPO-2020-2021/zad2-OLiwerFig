#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


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
  LZespolona  operator + (   LZespolona  Skl2);
LZespolona  operator - (   LZespolona  Skl2);
LZespolona  operator * (   LZespolona  Skl2);
LZespolona  operator / (   LZespolona  Skl2);
LZespolona  operator / (   double  Skl2);
double mod2( );
LZespolona Sprzezenie( );
void Wyswietl( );
double arg( );
LZespolona  operator += (LZespolona  Skl2);
LZespolona  operator /= ( LZespolona  Skl2);

///////////////////////////////////////////////////////////////

const bool  operator == (   LZespolona  Skl2)const;
bool  operator != (   LZespolona  Skl2);
};

/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */




///////////////////////////////////////////////////////////////




std::ostream & operator << (std::ostream &wyj, const LZespolona &Skl);
std::istream & operator >> (std::istream &wej, LZespolona &Skl);

///////////////////////////////////////////////////////////////






#endif
