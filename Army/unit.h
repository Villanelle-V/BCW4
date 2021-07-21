#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <iostream>

class Unit {
protected:
    int hitPoints;
    int hitPointsLimit;
    int damage;
    std::string name;
public:
    Unit(const std::string& name);
    Unit();
    virtual ~Unit();
    int getDamage() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    const std::string& getName() const;
    void sethitPoints();

};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif // UNIT_H
