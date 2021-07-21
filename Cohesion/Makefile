all: main.out

main.out: Category.o Item.o Order.o Customer.o
    g++ -o main.cpp *.o -o main.out 

Category.o:
    g++ -c Category.cpp

Item.o:
    g++ -c Item.cpp

Order.o:
    g++ -c Order.cpp

Customer.o:
    g++ -c Customer.cpp

clean:
    rm -f *.o