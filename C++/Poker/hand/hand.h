/* CREATED BY: 1E1DB14C
** CREATED 191326 DEC 2025 UPDATED 18 MAR 2026
** CLI Poker: Hand class header
*/


#ifndef Hand_H
#define Hand_H

class Hand {
	private:
		/* The cards that make up the player's hand.
		*/
		Card hand[2];
	public:
		/* constructor
		*/
		Hand(void) {
			// set hand cards to blank cards
			this->hand[0] = Card();
			this->hand[1] = Card();
		} // end of constructor

		/* Sets a card in the hand that is "dealt" from the Deck class. The
		** card that is set in the hand is determined by whichever card is
		** not currently set.
		** Returns the set card encoding.
		*/
		int setHandCard(Card c) {
			c.checkValidCard(); // check card's validity
			if(!hand[0].getInit()) {
				hand[0] = c;
				hand[0].checkValidCard(); // should be redundant
			} else {
				hand[1] = c;
				hand[1].checkValidCard(); // should be redundant
			} // end of conditional

			return c.getCardEncoding();
		} // end of setHandCard()

		std::string getPlayerHand(void) {
			return hand[0].getCardDesignation() + "\n" + hand[1].getCardDesignation();
		} // end of getPlayerHand()
}; // end of Hand class

#endif
