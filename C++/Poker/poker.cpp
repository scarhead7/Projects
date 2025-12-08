/* CREATED BY: 1E1DB14C
** CREATED 030905 DEC 2025 UPDATED 08 DEC 2025
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
		c1.setCardDesignationEncoding(9);//set card to Jack of Spades
		cout << "Encoding: ";//DEBUGGING
		cout << c1.getCardEncoding() << endl;//retrieve card encoding; DEBUGGING
		cout << "Text: ";//DEBUGGING
		cout << c1.getCardDesignation() << endl;//retrieve card textual representation; DEBUGGING
		cout << "this will never show";//DEBUGGING
	} catch(InvalidCardDesignationException e) {
		cout << e.what() << endl;
	} // end of try-catch
	
	return 0;
} // end of main()
