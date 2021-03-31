#include "LZespolona.hh"



/*** tyle do kreczmer na tydzien 0 **/
/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
      LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
          LZespolona  Wynik;

  Wynik.re = Skl1.re *Skl2.re-Skl1.im * Skl2.im;
  Wynik.im = Skl1.re *Skl2.im+Skl1.im *Skl2.re;
  return Wynik;
}
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
 return Skl1*Sprzezenie(Skl2)/mod2(Skl2);
}
LZespolona  operator / (LZespolona  Skl1,  double  Skl2)
{

LZespolona  Wynik;
            
if(Skl2==0)
throw "nie dzili sie przez zero";

  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}
double mod2(LZespolona Skl)
{
    return Skl.re*Skl.re+Skl.im*Skl.im;
}
LZespolona Sprzezenie(LZespolona Skl)
{
    Skl.im=(-1)*Skl.im;
    return Skl;
}

void Wyswietl(LZespolona Skl)
{
      std::cout<<"("<<Skl.re<<std::showpos<<Skl.im<<std::noshowpos<<"i)";
}

/////////////////////////////////////////////////////////
void inicjalizuj(LZespolona &Skl)
{
    Skl.re=0;
    Skl.im=0;
}

bool  operator == (LZespolona  Skl1,  LZespolona  Skl2)
{
    if(abs(Skl1.re-Skl2.re)<=EPSILON && abs(Skl1.im-Skl2.im)<=EPSILON)
    {
        return true;
    }

    return false;
}

bool  operator != (LZespolona  Skl1,  LZespolona  Skl2)
{
    if(abs(Skl1.re-Skl2.re)>EPSILON || abs(Skl1.im-Skl2.im)>EPSILON)
    {
        return true;
    }

    return false;
}
///////////////////////////////////////////////

std::ostream & operator << (std::ostream &wyj, const LZespolona & Skl)
{
  wyj<<"("<<Skl.re<<std::showpos<<Skl.im<<std::noshowpos<<"i)";
  return wyj;
}

std::istream & operator >> (std::istream &wej, LZespolona &Skl)
{
    char pom;
    wej>>pom;
    if(pom!='(')
    {
        wej.setstate(std::ios::failbit);
    }
     wej>>Skl.re;
      wej>>Skl.im;
      wej>>pom;
    if(pom!='i')
    {
        wej.setstate(std::ios::failbit);
    }
    wej>>pom;
        if(pom!=')')
    {
        wej.setstate(std::ios::failbit);
    }

    return wej;
}


