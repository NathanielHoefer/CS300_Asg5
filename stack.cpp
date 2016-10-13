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

