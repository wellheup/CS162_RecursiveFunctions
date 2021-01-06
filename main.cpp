
/*********************************************************************
** Author: Phillip Wellheuser							CS 162-400
** Date: 5/5/19
** Description: Runs the recursions program for lab 5
*********************************************************************/
#include <string>
#include <iostream>
#include "recursions.hpp"
#include "menuShell.hpp"

int main() { //select which recursion to run
	std::string prompt = "Welcome to Phillip Wellheuser's Lab 5, what would you like to do?",
		askReverseString = "1. Reverse a string",
		askSumArray = "2. Sum an array",
		askTriangularNumber = "3. Find a triangular number", 
		askExit = "4. Exit";
	int choice = 0;
	while (choice != 4) {
		std::cout << std::endl;
		choice = choiceMenu3(prompt, askReverseString, askSumArray, askTriangularNumber, askExit);
		if (choice == 1) {
			std::string askForString ="Please enter a string between from 1 to 1000 characters long.",
				input,
				showResult = "Your reversed string is as follows: ";
			input = enterStringWithinRange(askForString, 1, 1000);
			std::cout << showResult << std::endl;
			reverseString(input);
			std::cout << std::endl;
		}
		else if (choice == 2) {
			std::string howManyElements = "How many elements are in your array? (1-100)",
				askForElements = "Please enter an integer between -1000000 and 1000000", 
				promptFillArray= "Populate the array: ", 
				showResult = "The sum of your array is: ";
			int arraySize = chooseIntInRange(howManyElements, 0, 100),
				arraySum;
			int* userArray = new int[arraySize];
			std::cout << promptFillArray << std::endl;
			for (int i = 0; i < arraySize; i++) {
				userArray[i] = chooseIntInRange(askForElements, -1000000, 1000000);
			}

			arraySum = sumArray(userArray, arraySize);

			std::cout << showResult << arraySum << std::endl;

			delete[] userArray; 
		}
		else if (choice == 3) {
			std::string askForNumber = "Please enter a number from 1 to 1000";
			int userTriangleNumber = chooseIntInRange(askForNumber, -1, 1001);
			std::cout << "The triangular number for " << userTriangleNumber
				<< " is: " << triangularNumber(userTriangleNumber) << std::endl;
		}
		else if (choice == 4) {
			std::cout << "Goodbye!" << std::endl; 
		}
		else {
			std::cout << "There's been an error in choiceMenu3()" << std::endl;
		}
	}

	return 0;
}
