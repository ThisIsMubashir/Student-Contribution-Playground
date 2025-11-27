#ifndef CUTILITY_H
#define CUTILITY_H

// STRING UTILITIES
char* to_uppercase(const char* str);   // BUG: intentionally returns static buffer
char* reverse_string(const char* str); // TODO for students

// MATH UTILITIES
int square(int n);
int factorial(int n); // TODO for students

// FILE UTILITIES (implemented in fileutils.c)
int count_lines(const char* file_path); // TODO improve error handling

#endif
