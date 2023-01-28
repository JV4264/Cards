#include "card.hpp"

CardT::CardT( SuitT suit, int rank ){
  _suits = suit;
  _ranks = rank;
  _points = points[rank];
  
}
void CardT::print( ostream& out ){
  out << ranks[_ranks] << " " << suits[_suits][0] << " " << _points 
    << endl;
}
