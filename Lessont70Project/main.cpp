#include "main.h"

class Calculator {
public:
	static int add(int a, int b) {
		return a + b;
	}

	static double add(double a, double b) {
		return a + b;
	}

	static int add(int a, int b, int c) {
		return a + b + c;
	}
};

int main() {
	return 0;
}