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
unsigned long int factorial(int n)
{
	// filter: can use filter
	if(n < 0)
	{
		return -1;	// return with -1, can be handling in entry point function
	}

	// updater: prefer using an updater
	// if(n < 0)
	// {
	// 	n = -n;
	// }

	unsigned long int iFact = 1;	// since factorial can't be -ve number
									// can be used to store larger numbers
									// can use long long int as well
									// for storing larger numbers
									// for 32 bit max is 12!
									// for 64 bit max is ~ 20!
	int iCnt = 0;

	for(iCnt = n; iCnt > 0; iCnt--)
	{
		iFact = iFact * iCnt;
	}
	
    return iFact;
}