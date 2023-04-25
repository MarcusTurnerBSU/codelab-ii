#include "Numbers.h"

	//parameter constructor that accepts the values for the variables
	Numbers::Numbers(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	//function that returns the sum of the variables
	int Numbers::sumTotal() {
		int sum;
		sum = num1 + num2;
		return sum;
	}
