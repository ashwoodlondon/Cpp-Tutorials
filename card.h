#include <iostream>
using namespace std;

enum suits {diamond, club, heart, spade}; 


class Card {

public:

Card();
Card(suits, int);
void toString();
friend ostream& operator << (ostream& out, Card& aCard);


int rank;
suits suit;

};

Card::Card() {

        rank = 1;
        suit = spade;

}

Card::Card(suits sv, int rv) {

        rank = rv;
        suit = sv;

}

void Card::toString() {

	std::cout << "Card is: ";

	switch(rank) {
		case 1:   std::cout << "Ace"; break;
		case 11:  std::cout << "Jack"; break;
		case 12:  std::cout << "Queen"; break;
		case 13:  std::cout << "King"; break;
		default:  std::cout << rank;
	}

	switch(suit) {
		case diamond:   std::cout << " of Diamonds."; break;
		case club:	std::cout << " of Clubs."; break;
		case heart:	std::cout << " of Hearts."; break;
		case spade:	std::cout << " of Spades."; break;
	}

	std::cout << std::endl;

}


ostream& operator << (ostream& out, Card& aCard) {

        switch(aCard.rank) {
                case 1:   out << "Ace"; break;
                case 11:  out << "Jack"; break;
                case 12:  out << "Queen"; break;
                case 13:  out << "King"; break;
                default:  out << aCard.rank;
        }

        switch(aCard.suit) {
                case diamond:   out << " of Diamonds."; break;
                case club:      out << " of Clubs."; break;
                case heart:     out << " of Hearts."; break;
                case spade:     out << " of Spades."; break;
        }

	return out;

}


