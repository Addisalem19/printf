#include "main.h"

int print_decimal(int value){
	int count = 0;
	if (value < 0) {
		count += _putchar('-');
		value = value * -1;
	}
