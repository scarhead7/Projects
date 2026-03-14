/* CREATED BY: 1E1DB14C
** CREATED 030905 DEC 2025 UPDATED 14 MAR 2026
** CLI Poker
*/


#include <iostream>

#include "card/InvalidCardDesignationException.cpp"
#include "card/card.h"
#include "hand/hand.h"

using std::cout;
using std::endl;

int main(void) {
	Card c1;//DEBUGGING
	Card hand[2]; // player hand
	Card community[3]; // community ("table") cards
	Hand phand; // player hand

	try {
		phand.dealPlayerHand(); // deal player hand

		c1.setCardDesignationEncoding(9);//set card to Jack of Spades; DEBUGGING
		// display player's hand
		cout << endl << "Player's hand:\n" << phand.getPlayerHand() << endl; //TEMP
	} catch(InvalidCardDesignationException e) {
		cout << e.what() << endl;
	} // end of try-catch
	
	return 0;
} // end of main()
