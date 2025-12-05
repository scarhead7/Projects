/* CREATED BY: 1E1DB14C
** CREATED 030905 DEC 2025 UPDATED 05 DEC 2025
** CLI Poker
*/


#include <iostream>

#include "card/InvalidCardDesignationException.cpp"
#include "card/card.h"

using std::cout;
using std::endl;

int main(void) {
	Card c1;

	try {
		//DEBUGGING
		c1.setCardDesignation(0,12);//set card to Ace of Spades
		cout << c1.getCardEncoding() << endl;//retrieve card encoding; DEBUGGING
	} catch(InvalidCardDesignationException e) {
		cout << e.what() << endl;
	} // end of try-catch
	
	return 0;
} // end of main()
