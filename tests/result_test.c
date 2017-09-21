#include "functions.h"
#include "ctest.h"


CTEST(Result,bolshe_17)
{		
    const int a = result_for_tests(20);
    int b = 1; 
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,bolshe_12_menshe_17)
{
    const int a = result_for_tests(15);
    int b = 2;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,bolshe_5_menshe_12)
{
    const int a = result_for_tests(8);
    int b = 3;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,4)
{
    const int a = result_for_tests(4);
    int b = 4;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,3)
{
    const int a = result_for_tests(3);
    int b = 5;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,2)
{
    const int a = result_for_tests(2);
    int b = 6;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,1)
{
    const int a = result_for_tests(1);
    int b = 7;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}

CTEST(Result,0)
{
    const int a = result_for_tests(0);
    int b = 8;
    const int result = a;
    const int expected = b;
    ASSERT_EQUAL(expected, result);
}
