/* CREATED BY: 1E1DB14C
** CREATED 051015 DEC 2025 UPDATED 05 DEC 2025
** CLI Poker Invalid Card Designation Exception
*/


class InvalidCardDesignationException : public std::exception {
	private:
		std::string message;
	public:
		InvalidCardDesignationException(const char* msg) :
			message(msg) {}
		const char* what() const noexcept override {
			return this->message.c_str();
		} // end of what()
};
