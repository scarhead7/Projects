/* CREATED BY: 1E1DB14C
** CREATED 221314 NOV 2025 UPDATED 22 NOV 2025
** FizzBuzz
*/


#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	/* Start at 1 and print numbers up to and including 20.
	*/
	for(int lcv = 1; lcv <= 20; lcv++) {
		if(lcv % 3 == 0 && lcv % 5 == 0)
			cout << lcv << ": FIZZBUZZ" << endl;
		else if(lcv % 3 == 0)
			cout << lcv << ": FIZZ" << endl;
		else if(lcv % 5 == 0)
			cout << lcv << ": BUZZ" << endl;
		else
			cout << lcv << endl;
	} // end of for loop

	return 0;
} // end of main()
