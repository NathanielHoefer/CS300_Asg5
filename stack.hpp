/*****************************************************************************/
/* Program 5 - Decimal to Binary Converter									 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #5


Class Name: Stack
	This class initializes a stack containing nodes with data of integer type

Data:
		- (Node) *mTop: Pointer to the Top of the stack
		- (int) mCount: The number of nodes within the stack

Constructors:
		+ Stack() - Creates an empty stack

Mutator Functions:
		+ setTop
		+ setCount

Accessor Functions:
		+ getTop
		+ getCount

Functions:
		+ Push(int data) - creates a new node on top of stack
			Preconditions: None
			Postconditions: New node with entered integer will be on top of
				stack
			> Check to see if stack is empty.
			> If empty, create node with null pointer and int data
			> If not empty, create node with pointer to next node and int data
			> Increase count by 1

		+ Pop() - deletes the top-most node
			Preconditions: None
			Postconditions: Top node is deleted and stack points to next node.
			> Check to see if stack is empty
			> If not empty, update stack to point to next node, then delete the
				top node.
			> Decrease count by 1

		+ Top() - retrieves the data held in the top-most node
			Precondition: None
			Postcondition: None
			Returns: Data in top node
			> Check to see if stack is empty.
			> If not, return integer in top node

		+ isEmpty() - determines if stack is empty
			Precondition: None
			Postcondition: None
			Returns: True if empty
			> Check the value of top node
			> If top node pointer returns NULL, then return true


 */

#ifndef STACK_HPP_
#define STACK_HPP_

#include "node.hpp"
#include <string>

using namespace std;


class Stack
{

private:

// Member variables

	// Pointer to the Top of the stack
	Node* mTop;

	// The number of nodes within the stack
	int mCount;


public:

// Constructors

	Stack();


// Accessors and Mutators

	void setTop(Node* ptr) { mTop = ptr; };
	void setCount(int count) { mCount = count; };
	Node* getTop() { return mTop; };
	int getCount() { return mCount; };


// Member Functions

//	creates a new node on top of stack
//		Preconditions: None
//		Postconditions: New node with entered integer will be on top of stack
	void push(int data);


//	deletes the top-most node
//		Preconditions: None
//		Postconditions: Top node is deleted and stack points to next node.
	void pop();


//	retrieves the data held in the top-most node
//		Precondition: None
//		Postcondition: None
//		Returns: Data in top node
	int top();


//	determines if stack is empty
//		Precondition: None
//		Postcondition: None
//		Returns: True if empty
	bool isEmpty();



	string toBinary(float decNum, Stack* ptr);
};


#endif /* STACK_HPP_ */
