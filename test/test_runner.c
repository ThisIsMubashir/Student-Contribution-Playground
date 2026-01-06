#include <stdio.h>
#include "cutility.h"

int main() {
    printf("Testing square(5): %d (expected 25)\n", square(5));

    // TODO: Students will add more tests

	//factorial() tests
	printf("Testing factorial(10): %lu (expected 3628800)\n", factorial(10));
	printf("Testing factorial(0): %lu (expected 1)\n", factorial(0));
	printf("Testing factorial(1): %lu (expected 1)\n", factorial(1));
	printf("Testing factorial(-5): %lu (expected 0 / error)\n", factorial(-5));
	printf("Testing factorial(12): %lu (expected 479001600)\n", factorial(12));
	printf("Testing factorial(2):  %lu (expected 2)\n", factorial(2));
    printf("Testing factorial(5):  %lu (expected 120)\n", factorial(5));

    return 0;
}
