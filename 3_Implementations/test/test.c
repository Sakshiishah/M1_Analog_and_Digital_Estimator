#include "unity.h"
#include <Digital.h>
#include <Opamp.h>
#define PROJECT_NAME    "ESTIMATOR"

/* Prototypes for all the test functions */
void test_opamp_f(void);
void test_digital_f(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_opamp_f);
  RUN_TEST(test_digital_f);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_opamp_f(void) {
  TEST_ASSERT_EQUAL(-1,opamp_f(1 1));
}

void test_digital_f(void) {
  TEST_ASSERT_EQUAL(1,digital_f(1 1));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}
