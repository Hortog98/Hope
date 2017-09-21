#include "functions.h"
#include "ctest.h"

CTEST(Modul,-1)
{		
    const int a = modul(-1);
    int b = 1;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,-10)
{
    const int a = modul(-10);
    int b = 10;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,-20)
{
    const int a = modul(-20);
    int b = 20;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,-30)
{
    const int a = modul(-30);
    int b = 30;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,1)
{
    const int a = modul(1);
    int b = 1;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,10)
{
    const int a = modul(10);
    int b = 10;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,20)
{
    const int a = modul(20);
    int b = 20;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Modul,30)
{
    const int a = modul(30);
    int b = 30;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}
