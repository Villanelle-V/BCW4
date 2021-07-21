#include <iostream>

class FibonaccilIterator {
private:
	int first;
	int number;
	int current;

public:
	FibonacciIterator(int number) {
		this->number = number;
		this->first = 1;
		this->current = 1;
	}

	void next() {
		if (over()) {
			return;
		}

		current += 1;
	}

	void operator++() { next(); }

	void operator++(int) { operator++(); }

	bool over() { return current > number; }

	int value() { return current; }

	int operator*() { return value(); }

	int operator[](int value) { return first + value; }

	long long result() {
		long long result = number;

		for ( int i = number - 1; i > 0; i-- ) {
			result *= i;
		}
		return result;
}

};

int main() {
	FactorialIterator factor(5);

	for (; !factor.over(); factor++) {
		std::cout << *factor << std::endl;
	}

	std::cout << factor.result() << std::endl;

	return 0;
}