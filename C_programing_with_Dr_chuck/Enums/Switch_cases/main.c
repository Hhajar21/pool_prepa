#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "http.h"

// Define macros for unit testing
#define assert_string_equal(actual, expected, message) \
    do { \
        if (strcmp((actual), (expected)) != 0) { \
            fprintf(stderr, "Assertion failed: %s\nExpected: %s\nActual: %s\n", (message), (expected), (actual)); \
            exit(EXIT_FAILURE); \
        } \
    } while (0)

void test_switch_enum() {
    assert_string_equal(http_to_str(HTTP_BAD_REQUEST), "400 Bad Request", "HTTP_BAD_REQUEST failed");
    assert_string_equal(http_to_str(HTTP_UNAUTHORIZED), "401 Unauthorized", "HTTP_UNAUTHORIZED failed");
    assert_string_equal(http_to_str(HTTP_NOT_FOUND), "404 Not Found", "HTTP_NOT_FOUND failed");
    assert_string_equal(http_to_str(HTTP_TEAPOT), "418 I AM A TEAPOT!", "HTTP_TEAPOT failed");
    assert_string_equal(http_to_str(HTTP_INTERNAL_SERVER_ERROR), "500 Internal Server Error", "HTTP_INTERNAL_SERVER_ERROR failed");
}

void test_switch_enum_default() {
    assert_string_equal(http_to_str((HttpErrorCode)999), "Unknown HTTP status code", "Default case failed");
}

int main() {
    printf("Running tests...\n");

    test_switch_enum();
    printf("test_switch_enum passed.\n");

    test_switch_enum_default();
    printf("test_switch_enum_default passed.\n");

    printf("All tests passed.\n");
    return 0;
}