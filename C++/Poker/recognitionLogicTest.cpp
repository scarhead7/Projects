/* CREATED BY: 1E1DB14C
** CREATED 281651 MAR 2026 UPDATED 28 MAR 2026
** Test file to determine logic for hand ranking recognition.
*/


#include <iostream>

#include "card/InvalidCardDesignationException.cpp"
#include "card/card.h"
#include "hand/hand.h"

using std::cout;
using std::endl;

int main(void) {
	Hand playerHand;
	Card rand; // card to set to hand

	rand.setCardValue(0); // 2...
	rand.setCardSuit(0); // ...of Spades
	rand.setCardEncoding();
	playerHand.setHandCard(rand); // set first player hand card
	rand.setCardValue(0); // 2...
	rand.setCardSuit(1); // ...of Hearts
	rand.setCardEncoding();
	playerHand.setHandCard(rand); // set second player hand card

	cout << playerHand.getFirstCardValue() << std::endl;//DEBUGGING
	cout << playerHand.getSecondCardValue() << std::endl;//DEBUGGING
	cout << playerHand.getPlayerHand() << std::endl;

	return 0;
} // end of main()
