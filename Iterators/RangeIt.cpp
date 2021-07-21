#include <iostream>

class RangeIterator {
private:
	int first;
	int step;
	int size;
	int current;

public:
	RangeIterator(int first, int step, int size) {
		this->first = first;
		this->step = step;
		this->size = size;
		this->current = first;
	}

	void next() {
		if (over()) {
			return;
		} else {
			current += step;
		}
	}

	void operator++() { next(); }

	void operator++(int) { operator++(); }

	bool over() { return current > size; }

	int value() { return current; }

	int operator*() { return value(); }

};

int main() {
    RangeIterator range(1, 1, 10);

    for (; !range.over(); range++) {
        std::cout << *range << std::endl;
    }
    return 0;
}
