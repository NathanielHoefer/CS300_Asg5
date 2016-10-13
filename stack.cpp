/*****************************************************************************/
/* Program 5 - Decimal to Binary Converter									 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #5

*/

#include "stack.hpp"
#include "node.hpp"

#include <string>
#include <sstream>

using namespace std;



/*****************************************************************************/
// Class Source Functions
/*****************************************************************************/


// CONSTRUCTORS ***************************************************************


Stack::Stack()
{
	mTop = NULL;
	mCount = 0;
}


// METHODS ********************************************************************


//	creates a new node on top of stack
//		Preconditions: None
//		Postconditions: New node with entered integer will be on top of stack
void Stack::push(int data)
{

	Node* ptr;

	if (mTop == NULL)
		ptr = new Node(data);
	else
		ptr = new Node(data, mTop);

	mTop = ptr;
	mCount++;

}


/*****************************************************************************/


//	deletes the top-most node
//		Preconditions: None
//		Postconditions: Top node is deleted and stack points to next node.
void Stack::pop()
{

	if (mTop != NULL)
	{
		Node* ptr = mTop;

		mTop = ptr -> getNextPointer();
		delete ptr;

		mCount--;
	}

}


/*****************************************************************************/


//	retrieves the data held in the top-most node
//		Precondition: None
//		Postcondition: None
//		Returns: Data in top node
int Stack::top()
{

	return mTop -> getData();

}


/*****************************************************************************/


//	determines if stack is empty
//		Precondition: None
//		Postcondition: None
//		Returns: True if empty
bool Stack::isEmpty()
{

	if (mTop == NULL)
		return true;
	else
		return false;

}


/*****************************************************************************/


//	converts decimal number to binary using recursion.
//		Precondition: Entered value is greater than 0
//		Postcondition: None
//		Returns: The binary value of the decimal number
string Stack::toBinary(int decNum, Stack* ptr)
{

	string str;
	int remainder;


	// If value isn't 0, push the remainder onto the stack and repeat function
	if (decNum != 0)
	{
		remainder = decNum % 2;
		ptr->push(remainder);
		str = ptr->toBinary(decNum / 2, ptr);
	}

	// Empty the stack of its contents.
	while (!ptr->isEmpty())
	{
		stringstream out;
		out << ptr->top();
		str += out.str();
		ptr->pop();
	}

	return str;

}

