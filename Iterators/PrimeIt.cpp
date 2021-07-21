#include <iostream>
#include <cmath>

class PrimeIt {
private:
    int limit;
    int first;
    int current;
    int index;
    int element;
    int* array;
public:
    PrimeIt(int limit) {
    this->current = 2;
    this->first = current;
    this->limit = limit;
    this->index = -1;
    this->element = current;
    this->array = new int [limit];
    }

    ~PrimeIt() {
        delete(array);
    }

    bool isPrime(int n) {
        if (n == 2) {
            return true;
        }

        if (n % 2 == 0 || n < 2) {
            return false;
        }

        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    void next() {
        if (over()) {
            return;
        }

        if (isPrime( this->element) ) {
            this->index += 1;
            this->array[this->index] = this->element;
            this->current += 1;
            this->element += 1;
        }
        else {
            this->element += 1;
            next();
        }
    }

    void  operator++() {
        next();
    }

    void operator++(int) {
        operator++();
    }

    void previous() {
        if (begin()) {
            return;
        }
        this->current -= 1;
        this->index -= 1;
    }

    void operator--() {
        previous();
    }

    void operator--(int) {
        operator--();
    }

    bool over() {
        return this->current > this->limit;
    }

    bool begin() {
        return this->index < 0;
    }

    int value() {
        if (this->current == this->first) {
            next();
        }
        if (this->index == (this->limit - this->first)) {
            previous();
        }
        return this->array[this->index];
    }

    int operator*() {
        return value();
    }
};
