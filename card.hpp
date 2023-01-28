#include "tools.hpp"
#ifndef CARDT_H
#define CARDT_H

enum SuitT {Suit_Unknown, Hearts, Diamonds, Clubs, Spades};
const std::string suits[] = {"Unknown","Hearts","Diamonds","Clubs","Spades"};
const int points[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
const char ranks[] = {"-23456789TJQKA"};

class CardT{
private:
    short int _points;
    SuitT _suits;
    char _ranks;
public:
    CardT() =default;
    CardT(SuitT, int);
    void print(ostream& out);
};
#endif
