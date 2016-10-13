/*****************************************************************************/
/* Program 5 - Decimal to Binary Converter									 */
/*****************************************************************************
    Author: Nathaniel Hoefer
    Student ID: X529U639
    Program: #5
*/
#include "node.hpp"
#include <string>

using namespace std;

/*****************************************************************************/
// Class Source Functions
/*****************************************************************************/


// CONSTRUCTORS ***************************************************************


Node::Node()
{
	mData = 0;
	mNextNode = NULL;
}


Node::Node(int data)
{
	mData = data;
	mNextNode = NULL;
}

Node::Node(int data, Node* nextNode)
{
	mData = data;
	mNextNode = nextNode;
}

