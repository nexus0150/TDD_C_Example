#include "PrimeNumber.h"
#include "../unity/unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_isPrimeNumber_1(void)
{
  TEST_ASSERT_EQUAL(1, isPrimeNumber(1));
}

void test_isPrimeNumber_2(void)
{
  TEST_ASSERT_EQUAL(0, isPrimeNumber(2));
}

void test_isPrimeNumber_3(void)
{
  TEST_ASSERT_EQUAL(1, isPrimeNumber(3));
}

void test_isPrimeNumber_4(void)
{
  TEST_ASSERT_EQUAL(0, isPrimeNumber(4));
}

void test_isPrimeNumber_5(void)
{
  TEST_ASSERT_EQUAL(1, isPrimeNumber(5));
}

