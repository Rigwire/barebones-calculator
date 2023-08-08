#include "operations.h"

int multiply(int a, int b) {

	return a * b;
}

int add(int a, int b) {

	return a + b;
}

int subtract(int a, int b) {

	return a - b;
}

int divide(int a, int b) {

	return a / b;
}

unsigned int factorial(int a) {
	unsigned int r{ 1 };
	for (int b{ a }; b > 1; b--)
		r *= b;

	return r;
}
