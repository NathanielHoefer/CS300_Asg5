/*****************************************************************************/
/* Program 5 - Decimal to Binary Converter									 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #5


Class Name: Node
	This class is used for creating a node within a stack which contains the
	data of an integer

Data:
		- (int) mData: Data being held
		- (Node) *mNextNode: Pointer to next node in list

Constructors:
		+ Node() - Sets the value to default
		+ Node(int data): creates node with the arguments passed
		+ Node(int data, Node* nextNode): creates node with the arguments passed

Mutator Functions:
		+ setNextPointer
		+ setData

Accessor Functions:
		+ getNextPointer
		+ getData

*/

using namespace std;

#ifndef NODE_HPP_
#define NODE_HPP_

class Node
{
	private:

// Member Variables

	// The integer held in node
	int mData;

	// Pointer to next node in stack
	Node *mNextNode;


	public:

// Constructors
	Node();
	Node(int data);
	Node(int data, Node* nextNode);


// Mutator and Accessor Functions
	void setNextPointer(Node *prt) { mNextNode = prt; };
	void setData(int data) { mData = data; };
	Node * getNextPointer() { return mNextNode; };
	int getData() { return mData; };

};

#endif /* NODE_HPP_ */
