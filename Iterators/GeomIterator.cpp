#include <iostream>
#include <cmath>

class GeomIterator {
private:
	int first;
	int step;
	int size;
	int current;

public:
	GeomIterator(int first, int step, int size) {
		this->first = first;
		this->step = step;
		this->size = size;
		this->current = first;
	}

	void next() {
		if (over()) {
			return;
		}

		current *= step;
	}

	void operator++() { next(); }

	void operator++(int) { operator++(); }

	bool over() { return current > size; }

	int value() { return current; }

	int operator*() { return value(); }
};

    GeomIterator it(1, 1, 10);

    for (; !it.over(); it++) {
        std::cout << *it << std::endl;
    }
    return 0;
