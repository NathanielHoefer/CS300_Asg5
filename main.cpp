/*****************************************************************************/
/* Program 5 - Decimal to Binary Converter									 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #5


Description of the Problem:
	You are going to write a program that changes a decimal number into a
	binary number.  In order to do this, you will write a stack class.  The
	stack class should be implemented using the node class and will used
	dynamic memory to create nodes – similar to the linked list.  The data
	for the node will be an integer.  The stack class should be generic.
	The code to use the stack and convert the number should be in the main
	program.

Functions:
    + main() - Asks the user for a decimal number and converts it to binary.
    	> Begin loop by asking user for integer
    	> Verifies that the input is correct and places it into an integer.
    	> Enter value into toBinary and print binary number to screen.
    	> Ask user if they want to enter another number.


	+ toBinary(int decNum) static - converts decimal number to binary using
		recursion.
		Precondition: Empty stack is created
		Postcondition: None
		Returns: The binary value of the decimal number
		> Check to see if decNum is zero and if so, retrieve every number
			in stack while deleting the nodes and placing them into a
			string. Then return the string.
		> If not 0, find the remainder of decNum divided by 2.
		> If the remainder is greater than 0, create a new node with value
			of 1, otherwise create a new node with the value 0.
		> The divided value then is fed back into another toBinary.

 */

#include "stack.hpp"
#include "node.hpp"
#include <string>
#include <iostream>

using namespace std;


int main()
{

	bool isExit = false;

	while (!isExit)
	{

		int decimalNumber = 0;
		bool isValid = false;
		string response;

		cout << "Binary Converter\n" << endl;

		cout << "Enter a decimal integer: " << endl;
		cin >> decimalNumber;

		Stack s1;

		cout << "\n" << s1.toBinary(decimalNumber, &s1) << endl;

		while (!isValid)
		{
			cout << "\nEnter another number? (Y/N)" << endl;
			cin >> response;

			if (response == "Y" || response == "y")
			{
				isValid = true;
			}
			else if (response == "N" || response == "n")
			{
				isValid = true;
				isExit = true;
			}
		}

	}

	return 0;
}






