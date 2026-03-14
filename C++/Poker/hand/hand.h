/* CREATED BY: 1E1DB14C
** CREATED 191326 DEC 2025 UPDATED 14 MAR 2026
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
		/* Generates two cards for the player's hand.
		** Returns 1 for success.
		*/
		int dealPlayerHand(void) {
			hand[0].setRandomCard();
			hand[1].setRandomCard();

			return 1;
		} // end of dealPlayerHand()

		std::string getPlayerHand(void) {
			return hand[0].getCardDesignation() + "\n" + hand[1].getCardDesignation();
		} // end of getPlayerHand()
}; // end of Hand class

#endif
