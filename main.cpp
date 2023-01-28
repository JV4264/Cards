//Justin V, Anthony Y
#include "tools.hpp"
#include "card.hpp"


int main() {
    int value;
    int play;
    ofstream myout;
    CardT Card;
    banner();
    myout.open("sorted.txt");
    for(value = 1; value < 5; value++) {
        for (play = 1; play < 14; play++) {
            Card = CardT((SuitT)value, play);
            Card.print(std::cout);
            myout << ranks[play] << " " << suits[value] << endl;
        }
    }
    myout.close();
    bye();
}
/*--------------------------------------------------------
    P4: A Deck of Cards
    Justin Vasquez and Anthony Yannella
    CS 2212
    Thu May  5 2022 20:26:03
----------------------------------------------------------*/
