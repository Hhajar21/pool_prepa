#ifndef MUNIT_H
#define MUNIT_H

#include <stdio.h>
#include <stdlib.h>

#define GREEN_TEXT "\033[0;32m"
#define RED_TEXT "\033[0;31m"
#define RESET_TEXT "\033[0m"

typedef int (*MunitTestFunction)(void);

typedef struct {
  const char* name;
  MunitTestFunction function;
} MunitTest;

#define munit_test(name, func) { name, func }
#define munit_null_test { NULL, NULL }

typedef struct {
  const char* name;
  MunitTest* tests;
} MunitSuite;

#define munit_suite(name, tests_array) { name, tests_array }

#define munit_case(suite_name, test_name, block) \
  int test_name(void) block

#define assert_int(actual, op, expected, message) \
  do { \
    int a = (actual); \
    int e = (expected); \
    if (!(a op e)) { \
      fprintf(stderr, "Assertion failed: %s (%d %s %d)\n", message, a, #op, e); \
      return 1; \
    } \
  } while (0)

int munit_suite_main(const MunitSuite* suite, void* user_data, int argc, char* argv[]) {
  int fail_count = 0;
  int total = 0;

  printf("Running test suite: %s\n", suite->name);

  for (int i = 0; suite->tests[i].name != NULL; i++) {
    printf("  %s ", suite->tests[i].name);
    int result = suite->tests[i].function();
    total++;
    if (result != 0) {
      printf("[%sOK%s]\n", GREEN_TEXT, RESET_TEXT);
    } else {
      printf("[%sFAIL%s]\n", RED_TEXT, RESET_TEXT);
      fail_count++;
    }
  }

  printf("\n%d of %d (%.0f%%) tests successful, %d (%.0f%%) failed.\n",
         total - fail_count, total,
         (total - fail_count) * 100.0 / total,
         fail_count, fail_count * 100.0 / total);

  return fail_count == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}

#endif // MUNIT_H
