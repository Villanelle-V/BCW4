all: main.out

main.out: unit.o SpellCaster.o Soldier.o
    g++ -o main.cpp *.o -o main.out 

unit.o:
    g++ -c unit.cpp

SpellCaster.o:
    g++ -c SpellCaster.cpp

Soldier.o:
    g++ -c Soldier.cpp

clean:
    rm -f *.o