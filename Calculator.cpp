#ifndef _Calculator_H_
#define _Calculator_H_

#include <iostream>
#include <math.h>
#include "Calculator.h"


int Calculator::factorielle(int a) {
	int fact = 1;
	int i = 0;
	while (i <= a) {
		fact *= i;
		i++;
	}
	return fact;
}

int Calculator::add(int a, int b) {
	return a + b;
}

int Calculator::sub(int a, int b) {
	return a - b;
}


#endif
