#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "cutility.h"

// BUG: returns pointer to static buffer (not safe)
char buffer[256];

char* to_uppercase(const char* str) {
    if (str == NULL) return NULL; // Minimal check

    for (int i = 0; str[i] != '\0'; i++) {
        buffer[i] = toupper(str[i]);
    }
    return buffer; // Students should convert to dynamically allocated memory
}

// TODO: Student implementation
char* reverse_string(const char* str) {
    return NULL;
}

int square(int n) {
    return n * n;
}

// TODO: Student implementation (factorial)
int factorial(int n) {
    return -1;
}
