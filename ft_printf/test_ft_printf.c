#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

#define BUFFER_SIZE 1024

int capture_output(char* buffer, const char *format, ...) {
    va_list args;
    va_start(args, format);

    // Redirect stdout to a buffer
    FILE* fp = fmemopen(buffer, BUFFER_SIZE, "w");
    if (!fp) {
        perror("fmemopen");
        exit(EXIT_FAILURE);
    }

    // Use vfprintf to write to the buffer
    int len = vfprintf(fp, format, args);
    
    // Close the file to flush the buffer
    fclose(fp);
    va_end(args);

    return len;
}

int test_ft_printf(const char *format, ...) {
    va_list args;
    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];
    int len1, len2;

    // Initialize the buffers with null characters
    memset(buffer1, 0, BUFFER_SIZE);
    memset(buffer2, 0, BUFFER_SIZE);

    // Capture output of printf
    va_start(args, format);
    len1 = capture_output(buffer1, format, args);
    va_end(args);

    // Capture output of ft_printf
    va_start(args, format);
    len2 = capture_output(buffer2, format, args);
    va_end(args);

    // Compare lengths and outputs
    if (len1 != len2 || strcmp(buffer1, buffer2) != 0) {
        printf("Test failed for format: %s\n", format);
        printf("Expected: %s (return %d)\n", buffer1, len1);
        printf("Got: %s (return %d)\n", buffer2, len2);
        return 1;
    }

    return 0;
}

int main() {
    int failed_tests = 0;

    // Add your test cases here
    failed_tests += test_ft_printf("Hello, %s!\n", "world");
    failed_tests += test_ft_printf("Number: %d\n", 42);
    failed_tests += test_ft_printf("Hex: %x\n", 255);
    failed_tests += test_ft_printf("Pointer: %p\n", (void*)main);
    failed_tests += test_ft_printf("Char: %c\n", 'A');
    failed_tests += test_ft_printf("Percent: %%\n");
    failed_tests += test_ft_printf("Signed int: %d, %i\n", -123, 123);
    failed_tests += test_ft_printf("Unsigned int: %u\n", 4294967295U);
    failed_tests += test_ft_printf("Hex lower: %x\n", 0xabcdef);
    failed_tests += test_ft_printf("Hex upper: %X\n", 0xABCDEF);
    failed_tests += test_ft_printf("Null string: %s\n", NULL);
    failed_tests += test_ft_printf("Pointer: %p\n", (void*)0x7ffee4b8c508);


    if (failed_tests == 0) {
        printf("All tests passed!\n");
    } else {
        printf("%d tests failed.\n", failed_tests);
    }

    return 0;
}