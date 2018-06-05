#include "StackC.h"
#include <iostream>

using namespace std;



StackC::StackC()
{

}


StackC::~StackC()
{
}

void StackC::add(int intToAdd)
{
	Node * newNode = new Node;//,create node
//put data in new node
	newNode->number = intToAdd;

//new node points to previous pointer, sets equal to NULL
	newNode->previous = NULL;

//point the tail/head to our new node
	head = newNode;
	tail = newNode;
	

}
void StackC::add2(int intToAdd)
{
	//Create a new node
	Node * newNode = new Node;
	//put data in new node
	newNode->number = intToAdd;

	//point next to the tail
	newNode->previous = tail;

	//point the tail to our new node
	tail->next = newNode;
	tail = newNode;
	





}


int StackC::Remove()
{

	Node* temp = tail;//create node pointer, make point to very last node in the list by pointing the tail pointer
	while (temp != NULL)//as long as temp pointer isnt equal to null, print data inside of the node that temp is currently pointing to
	{
		cout << temp->number << " ";
		//temp data point to previous node
		temp = temp->previous;//move temp to the previous node in the list


		return 0;
	}



}
int StackC::Remove2()
{

	Node* temp = head;//create node pointer, make point to very first node in the list by pointing the head pointer
	while (temp != NULL)//as long as temp pointer isnt equal to null, print data inside of the node that temp is currently pointing to
	{
		cout << temp->number << " ";
		//temp data point to previous node
		temp = temp->next;// move temp to the next node in the doubly linked list


		return 0;
	}



}

int StackC::Count()
{
	//int for counting items
	int numberOfItems = 0;
	//Start at the tail
	Node * temp = tail;
	//As long as the current position does not
	while (temp != NULL)
	{

		numberOfItems++;
		//move my current position
		temp = temp->previous;



	}


	return numberOfItems;

}