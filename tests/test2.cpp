#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "./doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("Test LZespolona dzielenie przez skalar 1") {
    LZespolona x, y;
    double t = 2;
    
    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;
   
    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar 2") {
    LZespolona x, y;
    double t = 3;
    
    x.re = 2;
    x.im = 2;

    y.re = 1;
    y.im = 1;
   
    CHECK(x/t == y);
}

TEST_CASE("Test LZespolona dzielenie przez skalar - zero") {
    LZespolona x;
    double t = 0;
    
    x.re = 2;
    x.im = 2;
 
   WARN_THROWS(x/t);
}



TEST_CASE("test LZespolona Roznica"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 1;
    z.im = 1;

    CHECK(x-y == z);
}

TEST_CASE("test LZespolona Roznica"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 1;
    z.im = 1;

    CHECK(x-y == z);
}

TEST_CASE("test LZespolona Roznica"){
    LZespolona x, y, z;

    x.re =0.49999;
    x.im = 0.49999;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 0.5;
    z.im = 0.5;

    CHECK(x-y == z);
}

TEST_CASE("test LZespolona Iloczyn"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 0;

    z.re = 0;
    z.im = 0;

    CHECK(x*y == z);
}

TEST_CASE("test LZespolona Iloczyn"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = 0;

    z.re = 1;
    z.im = 1;

    CHECK(x*y == z);
}

TEST_CASE("test LZespolona Iloczyn"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0;
    y.im = 1;

    z.re = -1;
    z.im = 1;


    CHECK(x*y == z);
}


TEST_CASE("test LZespolona Iloczyn"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = 1;

    z.re = 0;
    z.im = 2;


    CHECK(x*y == z);
}

TEST_CASE("test LZespolona Iloczyn"){
    LZespolona x, y, z;

    x.re = 1;
    x.im = 1;

    y.re = 0.00001;
    y.im = 0.00001;

    z.re = 0;
    z.im = 0;


    CHECK(x*y == z);
}


TEST_CASE("test LZespolona modul"){
    LZespolona x;
    double t=2;
    x.re = 1;
    x.im = 1;



    CHECK( x.mod2() == t);
}

TEST_CASE("test LZespolona sprzezenie"){
    LZespolona x, y;

    x.re = 1;
    x.im = 1;

    y.re = 1;
    y.im = -1;




    CHECK(x.Sprzezenie() == y);
}
