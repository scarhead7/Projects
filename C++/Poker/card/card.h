/* CREATED BY: 1E1DB14C
** CREATED 030946 DEC 2025 UPDATED 03 DEC 2025
** CLI Poker: Card class header
*/


#ifndef Card_H
#define Card_H

class Card {
	private:
		/* Card value (i.e. 0-12 with the numerals between 2 and 10 following
		** from 0 to 8, 9-11 being Jack through King, and 12 being Ace)
		*/
		int value;
		/* Card suit (i.e. 0-3 with each suit being assigned as follows:
		** 0=Spades
		** 1=Hearts
		** 2=Clubs
		** 3=Diamonds)
		*/
		int suit;
		/* Card value and suit encoded in to a single digit. Value will
		** be between 0 and 63, inclusive.
		*/
		int encoding;
		/* sets card value
		** will potentially go away
		*/
		void setCardValue(int v) {
			if(v <= 12 && v >= 0)
				this->value = v;
			else
				this->value = -1;
		} // end of setCardValue()
		/* returns card value only
		*/
		int getCardValue(void) {
			return this->value;
		} // end of getCardValue()
		void setCardSuit(int s) {
			if(s <= 3 && s >= 0)
				this->suit = s;
			else
				this->suit = -1;
		} // end of setCardSuit()
		/* returns card suit only
		*/
		int getCardSuit(void) {
			return this->suit;
		} // end of getCardSuit()
		/* encodes card value and suit
		*/
		void setCardEncoding(void) {
			//STUBBED
		} // end of setCardEncoding()
		/* returns card suit from encoded value
		*/
		int getCardEncodedSuit() {
			//STUBBED
			return -1;//DEBUGGING
		} // end of getCardEncodedSuit()
		/* returns card value from encoded value
		*/
		int getCardEncodedValue() {
			//STUBBED
			return -1;//DEBUGGING
		} // end of getCardEncodedValue()
	public:
		/* returns card encoded designaion value
		** DOES NOT decode it!
		*/
		int getCardEncoding(void) {
			return this->encoding;
		} // end of getCardEncoding()
		/* returns card decoded designation value as string
		*/
		std::string getCardDesignation(void) {
			//STUBBED
			// use getCardEncodedSuit() and getCardEncodedValue()
			return "fubar";//DEBUGGING
		} // end of getCardDesignation()
}; // end of Card class

#endif
