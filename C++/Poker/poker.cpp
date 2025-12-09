/* CREATED BY: 1E1DB14C
** CREATED 030905 DEC 2025 UPDATED 08 DEC 2025
** CLI Poker
*/


#include <iostream>
#include <random>

#include "card/InvalidCardDesignationException.cpp"
#include "card/card.h"

using std::cout;
using std::endl;

/** PROTOTYPES **/
int generateRandomNumber(int min, int max);

int main(void) {
	Card c1;//DEBUGGING
	Card hand[2]; // player hand
	Card community[3]; // community ("table") cards

	try {
		hand[0].setCardDesignation(generateRandomNumber(0, 3),
			generateRandomNumber(0, 12));
		hand[1].setCardDesignation(generateRandomNumber(0, 3),
			generateRandomNumber(0, 12));
		c1.setCardDesignationEncoding(9);//set card to Jack of Spades; DEBUGGING
		for(int i = 0; i < 2; i++) {//DEBUGGING
			cout << "Encoding: ";//DEBUGGING
			cout << hand[i].getCardEncoding() << endl;//retrieve card encoding; DEBUGGING
			cout << "Text: ";//DEBUGGING
			cout << hand[i].getCardDesignation() << endl;//retrieve card textual representation; DEBUGGING
		} // end of for loop
	} catch(InvalidCardDesignationException e) {
		cout << e.what() << endl;
	} // end of try-catch
	
	return 0;
} // end of main()

/* Generates a random number between the min and max.
*/
int generateRandomNumber(int min, int max) {
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> d(min, max);

    return d(gen);
} // end of generateRandomNumber()
