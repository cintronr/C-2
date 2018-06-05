/*
Rico Cintron
Stack non-STL and STL
3/24/2017
University of Advancing Technology
*/
//Include commands for non stl linked lists
#include<iostream>
#include<string>
#include"StackC.h"
#include<cstdlib>
//Includes for STL 
#include<stack>
#include<queue>




using namespace std;



int main(){
	cout << "********************************************************************************************************************" << endl;
	cout << "Hello. Welcome to my non-stl and stl linked list program." << endl;
	cout << "********************************************************************************************************************" << endl;
	//////////////////////////////////////////////////////////////////NON STL start////////////////////////////////////////////////////
	cout << "Commencing non STL stack and queue demonstration" << endl;
	StackC myStack;//class assignment to queue
	myStack.add(1);//manually add 1 to class, this initial function has specific head pointer and tail pointer assignment to null
	cout << "FIFO" << endl;
	for (int i = 1; i < 5; i++)// for loop to assign 1-4 to queue
	{
		myStack.add2(i);
		myStack.Remove();
		


	}
	cout << endl;
	cout << "LIFO" << endl;
	myStack.add(1);//manually add 1 to class, this initial function has specific head pointer and tail pointer assignment to null
	for (int i = 1; i < 5; i++)// for loop to assign 1-4 to queue
	{
		myStack.add2(i);
		myStack.Remove2();

	}
	cout << endl;
	cout << "There are currently " << myStack.Count() << " items in your stack/queue."<< endl;
	cout << endl;
	/////////////////////////////////////////////////////////////////NON STL END////////////////////////////////////////////////////
	cout << "Commencing STL Stack demonstration." << endl;
	///////////////////////////////////////////////////////////////Stack!///////////////////////////////////
	stack<int> testStack;//stack creation, accepts ints
	int count = 0;// int for counting items previously in stack

	cout << "LIFO" << endl;
	for (int i = 0; i < 4; i++) testStack.push(i);//while loop to push numbers 1-4 to stack

	cout << "Popping out items!" << endl;;
	while (!testStack.empty())//while loop, while stack is not empty...
	{
		cout << ' ' << testStack.top();//shift item to stack
		cout << " Shifting item. ";
		testStack.pop();//remove item from stack
		cout << "Removing item." << endl;
		count++;//add one to int count


	}
	cout << endl;
	cout << "Number of items that were in your stack:" << count << endl;
	cout <<"Number of items currently in your stack:" << testStack.size() << endl;
	cout << "\n" << endl;
	//////////////////////////////////////////////////////////////End Stack///////////////////////////////////
	cout << "Commencing STL Queue demonstration." << endl;
	//////////////////////////////////////////////////////////////Begin Queue/////////////////////////////////
	queue<int> myQueue;//queue creation, accepts ints
	int countQue = 0;//int for counting items previously in queue
	cout << "FIFO" << endl;
	for (int i = 0; i < 4; i++) myQueue.push(i);// for loop pushing items into que, 1-4
	while (!myQueue.empty())//while myQueue is not empty continue to push and pull items
	{
		cout << ' ' << myQueue.front();//shift item in 
		cout << " Shifting item. ";
		myQueue.pop();
		cout << "Removing item."<< endl;//remove item
		countQue++; //add one to int countQue
	}
	cout << endl;
	cout << "Number of items that were in your queue:" << countQue << endl;
	cout <<"Number of items currently in your queue:"<< myQueue.size() << endl;
	///////////////////////////////////////////////////////////End Queue///////////////////////////////////

	system("pause");
	return 0;




}