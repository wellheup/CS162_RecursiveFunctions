/*********************************************************************
** Author: Phillip Wellheuser							CS 162-400
** Date: 5/5/19
** Description: Prototypes several functions for demonstrating 
** recursive functions
*********************************************************************/
#ifndef RECURSIONS_HPP
#define RECURSIONS_HPP

/*********************************************************************
** Description: Receives a string parameter and prints the reverse of
**		that string to the console
*********************************************************************/
void reverseString(std::string input);

/*********************************************************************
** Description: Receives pointer to an int array and the size of that 
**		array then sums the values in the array recursivly and 
**		returns that total
*********************************************************************/
int sumArray(int* array, int arraySize);

/*********************************************************************
** Description: Receives an inteter parameter and then recursively 
**		calculates the triangular number of that number
*********************************************************************/
int triangularNumber(int N);

#endif