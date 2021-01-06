/*********************************************************************
** Author: Phillip Wellheuser							CS 162-400
** Date: 5/5/19
** Description: Implements several functions for demonstrating
** recursive functions
*********************************************************************/
#include <string>
#include <iostream>
#include "recursions.hpp"

/*********************************************************************
** Description: Receives a string parameter and prints the reverse of
**		that string to the console
*********************************************************************/
void reverseString(std::string input) {
	if (input.length() == 0) {
		std::cout << "\n";
	}
	else {
		std::cout << input.back();
		input.resize(input.length() - 1);
		reverseString(input);
	}
}

/*********************************************************************
** Description: Receives pointer to an int array and the size of that
**		array then sums the values in the array recursivly and
**		returns that total
*********************************************************************/
int sumArray(int * userArray, int arraySize){
	if (arraySize == 0) {
		return 0;
	}
	else {
		return userArray[arraySize - 1] + sumArray(userArray, arraySize - 1);	
	}
}

/*********************************************************************
** Description: Receives an inteter parameter and then recursively
**		calculates the triangular number of that number
*********************************************************************/
int triangularNumber(int N){
	if (N == 0) {
		return 0;
	}
	else {
		return N + triangularNumber(N - 1);
	}
}


