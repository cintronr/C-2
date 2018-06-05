/*
Rico Cintron
Assignment:Smart Pointers
3/10/2017
University of Advancing Technology
*/


#include<iostream>
#include<string>
#include<vector>
#include "Chair.h"
#include "Table.h"
#include <memory>


using namespace std;
//function for unique pointer
void chair() {
	cout << "**************************************Unique pointer************************************" << endl;
	
	unique_ptr<Chair> pNew(new Chair);//unique pointer to chair class
	pNew-> chairStat();//member access operator to class function
	pNew-> ~Chair();// member access operator to class function
	Chair* p = pNew.release();//points to null
	if (!pNew)// if statement testing condition of pointer... if pointer does not exist, states so.
	{


		cout << "Chair deleted. \n";
	}
	cout << "**********************************Unique pointer end************************************" << endl;


}

void table() {
	cout << "**************************************Shared pointer************************************" << endl;
	shared_ptr<Table> pTNew(new Table); //shared pointer to chair class
	pTNew->tableStat();//member access operator to class function
	
	if (!pTNew)//if statement testing condition of pointer... if pointer does not exist, states so.
	{

		cout << "Table deleted. \n";

	}
}



void table2() {
	cout << "**************************************Weak pointer************************************" << endl;
	
	

	
	


}

void greeting() {

	cout << "***************************************************************************************" << endl;
	cout << "Hello! Welcome to my smart pointer assignment." << endl;
	cout << "We will utilize a few different types of smart pointers." << endl;
	cout << "***************************************************************************************" << endl;


}


int main()
{
	greeting();//Greeting function call
	cout << endl;
	chair();// Chair(unique ptr) function call
	cout << endl;
	table();// Table(shared ptr) function call
	cout << endl;
	table2();// (weak ptr) function call
	

	system("pause");
	return 0;








}