#pragma once
#include <iostream>
#include<string>
#include <memory>
using namespace std;
class Table
{

public:
	
	
	Table();//constructor call
	virtual ~Table();//destructor call
	
	void tableStat() {

		cout << "Table is brown." << endl;


	}
	
	
};

