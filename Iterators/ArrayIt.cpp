#include <iostream>

template <class T>
class ArrayIt {
private:
    int limit;
    int count;
    T current;
    T* array;
public:
    ArrayIt(T* array, int limit) {
        this->limit = limit;
        this->current = array[0];
        this->count = 0;
        this->array = array;
    }

    void next() {
        if (over()) {
            return;
        }

        current = array[count + 1];
        count += 1;
    }

    void operator++() { next(); }

    void operator++(int) { operator++(); }

    bool over() { return count >= limit; }

    T value() { return current; }

    T operator*() { return value(); }
};

int main() {
    int array[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    ArrayIterator seq(array, 10);

    for ( ; !seq.over(); seq++ ) {
        cout << *seq << endl;
    }

    return 0;
}
