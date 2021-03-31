#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"
#include "WyrazenieZesp.hh"

TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -3;

    z.re = 2;
    z.im = -2;
    
    CHECK(x+y == z);
}


TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 2;
    x.im = 2;

    y.re = 0;
    y.im = 0;

    z.re = 2;
    z.im = 2;

    CHECK(x+y == z);
}

TEST_CASE("test LZespolona Suma"){
    LZespolona x, y, z;

    x.re = 2;
    x.im = 2;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 2;
    z.im = 2;

    CHECK(x+y == z);
}

TEST_CASE("Test LZespolona dodawanie,znany wynik") {
    WyrazenieZesp x{{1,1},Op_Dodaj,{1,1}};
    LZespolona t ={2,2};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona odejmowanie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Odejmij,{1,1}};
    LZespolona t ={0,0};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona mnozenie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Mnoz,{1,1}};
    LZespolona t ={0,2};
    
  
    CHECK(Oblicz(x)== t);
}

TEST_CASE("Test LZespolona dzielenie, znany wynik") {
    WyrazenieZesp x{{1,1},Op_Dziel,{1,1}};
    LZespolona t ={1,0};
    
  
    CHECK(Oblicz(x)== t);
}
