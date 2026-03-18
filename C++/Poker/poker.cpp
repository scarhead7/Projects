/* CREATED BY: 1E1DB14C
** CREATED 030905 DEC 2025 UPDATED 18 MAR 2026
** CLI Poker
*/


#include <iostream>

#include "card/InvalidCardDesignationException.cpp"
#include "card/card.h"
#include "hand/hand.h"
#include "deck/deck.h"

using std::cout;
using std::endl;

int main(void) {
	Card c1;//DEBUGGING
	Deck d1;
	Hand phand; // player hand

	try {
		// deal player hand
		phand.setHandCard(d1.generateRandomCard()); // set first hand card
		phand.setHandCard(d1.generateRandomCard()); // set second hand card

		c1.setCardDesignationEncoding(9);//set card to Jack of Spades; DEBUGGING
		// display player's hand
		cout << endl << "Player's hand:\n" << phand.getPlayerHand() << endl; //TEMP
	} catch(InvalidCardDesignationException e) {
		cout << e.what() << endl;
	} // end of try-catch
	
	return 0;
} // end of main()
