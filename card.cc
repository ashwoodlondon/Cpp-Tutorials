#include <iostream>
#include "card.h"

int main() {

Card cardOne;
Card cardTwo(diamond, 7);

std::cout << "Card one: " << cardOne.rank << " " << cardOne.suit << std::endl;
std::cout << "Card two: " << cardTwo.rank << " " << cardTwo.suit << std::endl;

cardOne.toString();
cardTwo.toString();

std::cout << cardOne << endl;
std::cout << cardTwo << endl;

return 0;

}


