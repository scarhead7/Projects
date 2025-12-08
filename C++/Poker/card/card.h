/* CREATED BY: 1E1DB14C
** CREATED 030946 DEC 2025 UPDATED 07 DEC 2025
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
			if(v <= 12 && v >= 0) {
				this->value = v;
			} else {
				throw InvalidCardDesignationException("Invalid Card Value");
			} // end of conditional
		} // end of setCardValue()

		/* returns card value only
		*/
		int getCardValue(void) {
			return this->value;
		} // end of getCardValue()

		/* sets card suit
		** will potentially go away
		*/
		void setCardSuit(int s) {
			if(s <= 3 && s >= 0) {
				this->suit = s;
			} else {
				throw InvalidCardDesignationException("Invalid Card Suit");
			} // end of conditional
		} // end of setCardSuit()

		/* returns card suit only
		*/
		int getCardSuit(void) {
			return this->suit;
		} // end of getCardSuit()

		/* encodes card value and suit
		*/
		void setCardEncoding(void) {
			this->encoding = ((this->getCardSuit() * 17) + 
				this->getCardValue());
		} // end of setCardEncoding()

		/* sets card value and suit to encoded value passed in
		*/
		void setDesignationFromEncoding(int e) {
			if((e / 17) >= 0 && (e / 17) <= 3) {
				this->suit = (e / 17);
			} else {
				throw InvalidCardDesignationException("Invalid Suit Encoding");
			} // end of conditional

			if((e % 17) >= 0 && (e % 17) <= 12) {
				this->value = (e % 17);
			} else {
				throw InvalidCardDesignationException("Invalid Value Encoding");
			} // end of conditional
		} // end of setDesignationFromEncoding()

		/* recognizes card based off of stored values of card value/suit and
		** returns string with textual representation of card designation
		** (i.e. Ace of Spades)
		*/
		std::string recognizeCard(void) { /* ! INCOMPLETE ! */
			int corrected_value = this->value + 2;

			if(this->suit == 0) {
				if(this->value <= 8) {//SPADES
					return std::to_string(corrected_value) + " of Spades";
				} else if(this->suit == 1) {//HEARTS
					return std::to_string(corrected_value) + " of Hearts";
				} else if(this->suit == 2) {//CLUBS
					return std::to_string(corrected_value) + " of Clubs";
				}else if(this->suit == 3) {//DIAMONDS
					return std::to_string(corrected_value) + " of Hearts";
				} // end of inner conditional
			} // end of outer conditional
			return "-1";//STUBBED
		} // end of recognizeCard()
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
			//return "fubar";//DEBUGGING
			return this->recognizeCard();//DEBUGGING
		} // end of getCardDesignation()

		/* !DEBUGGING FUNCTION ONLY!
		*/
		void setCardDesignation(int s, int v) {
			this->suit = s;
			this->value = v;
			this->setCardEncoding();
		} // end of setCardDesignation()
}; // end of Card class

#endif
