#include "../unity/unity.h"
#include <setjmp.h>
#include <stdio.h>

extern void setUp(void);
extern void tearDown(void);

extern void test_isPrimeNumber_1(void);
extern void test_isPrimeNumber_2(void);
extern void test_isPrimeNumber_3(void);
extern void test_isPrimeNumber_4(void);
extern void test_isPrimeNumber_5(void);

static void runTest(UnityTestFunction test)
{
  if (TEST_PROTECT())
  {
      setUp();
      test();
  }

  if (TEST_PROTECT() && !TEST_IS_IGNORED)
  {
    tearDown();
  }
}

void resetTest()
{
  tearDown();
  setUp();
}

int main(void)
{
  UnityBegin("test/TestPrimeNumber.c");

  RUN_TEST(test_isPrimeNumber_1, 20);
  RUN_TEST(test_isPrimeNumber_2, 30);
  RUN_TEST(test_isPrimeNumber_3, 41);
  RUN_TEST(test_isPrimeNumber_4, 51);
  RUN_TEST(test_isPrimeNumber_5, 57);

  return (UnityEnd());
}
