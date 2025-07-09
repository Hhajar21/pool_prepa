#ifndef MUNIT_H
#define MUNIT_H

#include <stdio.h>
#include <stdlib.h>

/* Macro to assert a condition in unit tests */
#define MUNIT_ASSERT(condition) \
    do { \
        if (!(condition)) { \
            fprintf(stderr, "Assertion failed: %s, in %s, line %d\n", #condition, __FILE__, __LINE__); \
            exit(EXIT_FAILURE); \
        } \
    } while (0)

/* Macro to run a test function */
#define MUNIT_RUN_TEST(test) \
    do { \
        printf("Running %s...\n", #test); \
        test(); \
        printf("%s passed.\n", #test); \
    } while (0)

#endif /* MUNIT_H */