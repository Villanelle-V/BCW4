#include <iostream>

class NaturalIterator {
    private:
        int limit;
        int current;

    public:
        NaturalIterator(int limit) {
            this->limit = limit;
            this->current = 1;
        }

    void next() {
        if ( over() ) {
            return;
        }

        current += 1;
    }

    void operator++() { next(); }
    void operator++(int) { operator++(); }
    bool over() { return current > limit; }
    int value() { return current; }
    int operator*() { return value(); }
};

int main() {
    NaturalIterator seq(10);

    for ( ; !seq.over(); seq++ ) {
        std::cout << *seq << std::endl;
    }

    return 0;
}
