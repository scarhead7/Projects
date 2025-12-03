/* CREATED BY: 1E1DB14C
** CREATED 030946 DEC 2025 UPDATED 03 DEC 2025
** CLI Poker: Card class header
*/


#ifndef Card_H
#define Card_H

class Card {
	private:
		/* card value (i.e. 1-13 with 1 being Ace and
		** 11-13 being Jack through King)
		*/
		int value;
		/* card suit (i.e. 1-4 with each suit being assigned as follows:
		** 1=hearts
		** 2=spades
		** 3=clubs
		** 4=diamonds)
		*/
		int suit;
	public:
		std::string getCardDesignation(void) {
			return "fubar";
		} // end of getCardDesignation()
}; // end of Card class

#endif
