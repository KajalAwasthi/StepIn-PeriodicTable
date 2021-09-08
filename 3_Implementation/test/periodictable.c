#include "unity.h"
#include <periodictable.h>

/* Modify these two lines according to the project */
#include <periodictable.h>
#define PROJECT_NAME    "Periodic Table"

/* Prototypes for all the test functions */
void test_show_record(void);
void test_reset_score(void);
void test_help(void);
void test_edit_score(void);

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
  RUN_TEST(test_show_record);
  RUN_TEST(test_reset_score);
  RUN_TEST(test_help);
  RUN_TEST(test_edit_score);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
