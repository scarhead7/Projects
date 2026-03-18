/* CREATED BY: 1E1DB14C
** CREATED 181059 MAR 2026 UPDATED 18 MAR 2026
** CLI Poker: Deck class header
*/


#ifndef Deck_H
#define Deck_H

#include <random>

class Deck {
	private:
		/* Any card generated will be marked here. This assists in preventing
		** duplicate cards from being generated.
		*/
		bool generatedCards[4][13] = { false };

		/* generates a random number for card generation
		*/
		int genRanNum(int min, int max) {
			std::random_device rd;
		    std::mt19937 gen(rd());
		    std::uniform_int_distribution<> d(min, max);

		    return d(gen);
		} // end of genRanNum()
	public:
		/* constructor
		*/
		Deck(void) {
			// purposely left blank at this stage
		} // end of constructor
		/* generates a random card and returns it
		*/
		Card generateRandomCard(void) {
			int suitAttempt = -1;
			int valueAttempt = -1;
			Card genCard; // generated card

			do {
				suitAttempt = genRanNum(0,3); // generate random suit
				valueAttempt = genRanNum(0,12); // generate random value
				genCard.setCardSuit(suitAttempt); // set suit
				genCard.setCardValue(valueAttempt); // set value
				(void)genCard.setCardEncoding();
			} while(this->generatedCards[suitAttempt][valueAttempt]);
			this->generatedCards[suitAttempt][valueAttempt] = true;

			return genCard;
		} // end of generateRandomCard()

		/* !DEBUGGING FUNCTION ONLY!
		** Prints the generatedCards array to show which cards have been
		** generated.
		*/
		void showGeneratedCards(void) {
			for(int o=0;o<4;++o) {
				for(int i=0;i<13;++i) {
					std::cout << this->generatedCards[o][i] << " ";
				} // end of inner for loop
				std::cout << std::endl;
			} // end of outer for loop
		} // end of showGeneratedCards()
}; // end of Deck class

#endif
