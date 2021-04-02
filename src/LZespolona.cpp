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
LZespolona  LZespolona::operator + (   LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re =  re + Skl2.re;
  Wynik.im =  im + Skl2.im;
  return Wynik;
}

LZespolona  LZespolona::operator - (   LZespolona  Skl2)
{
      LZespolona  Wynik;

  Wynik.re =  re - Skl2.re;
  Wynik.im =  im - Skl2.im;
  return Wynik;
}
LZespolona  LZespolona::operator * (   LZespolona  Skl2)
{
          LZespolona  Wynik;

  Wynik.re =  re *Skl2.re- im * Skl2.im;
  Wynik.im =  re *Skl2.im+ im *Skl2.re;
  return Wynik;
}
LZespolona  LZespolona::operator / (   LZespolona  Skl2)
{
 return *this*Skl2.Sprzezenie()/Skl2.mod2();
}
LZespolona  LZespolona::operator / (   double  Skl2)
{

LZespolona  Wynik;
            
if(Skl2==0)
throw "nie dzili sie przez zero";

  Wynik.re =  re / Skl2;
  Wynik.im =  im / Skl2;
  return Wynik;
}
double LZespolona::mod2()
{
    return re*re+im*im;
}
LZespolona LZespolona::Sprzezenie()
{
    im=(-1)*im;
    return *this;
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

const bool  LZespolona::operator == (   LZespolona  Skl2)const
{
    if(abs( re-Skl2.re)<=EPSILON && abs( im-Skl2.im)<=EPSILON)
    {
        return true;
    }

    return false;
}

bool  LZespolona::operator != (   LZespolona  Skl2)
{
    if(abs( re-Skl2.re)>EPSILON || abs( im-Skl2.im)>EPSILON)
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
///////////////////////////////////////////////
double LZespolona::arg()
  {
      double wynik;
      if( re>0)
      {
          wynik=atan2( im, re) * 180 / M_PI;
      }
      else if ( re<0)
      {
          wynik=atan2( im, re) + M_PI * 180 / M_PI;
      }  



      else
      {
          throw " argument a jest zero wyjatek";
      }
      return wynik;

  }
LZespolona LZespolona::operator +=( LZespolona  Skl2)
{
    *this= *this+Skl2;
    return  *this;
}
LZespolona LZespolona::operator /=( LZespolona  Skl2)
{
     *this= *this/Skl2;
    return  *this;
}
