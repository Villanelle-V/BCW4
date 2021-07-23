#ifndef DATE_H
#define DATE_H

#include <iostream>

class InvalidDate {
public:
    std::string text;
    InvalidDate(const std::string& text) : text(text) {}
};

class IncorrectAge {
public:
    std::string text;
    IncorrectAge(const std::string& text) : text(text) {}
};

class Date {
private:
    int day;
    int month;
    int year;

    void validate(int day, int month, int year);
public:
    Date();
    Date(int day, int month, int year);
    ~Date();

    int getDay() const;
    int getMonth() const;
    int getYear() const;
};

#endif //DATE_H
