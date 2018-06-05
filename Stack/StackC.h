#pragma once
class StackC
{
private:
	
	struct Node
	{
		int number;
		Node * previous;
		Node* next;

	};





public:
	
	
	Node * tail;
	Node* head;
	StackC();
	~StackC();
	void add(int intToAdd);
	void add2(int intToAdd);
	int Remove();
	int Remove2();
	int Count();
};


