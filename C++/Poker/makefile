# CREATED BY: 1E1DB14C
# CREATED 030906 DEC 2025 UPDATED 19 DEC 2025
# For Poker

MAKEFLAGS += --silent

a: poker.cpp card/card.h card/InvalidCardDesignationException.cpp hand/hand.h
	g++ poker.cpp -o a

run: a
	./a

clean:
	rm ./a
