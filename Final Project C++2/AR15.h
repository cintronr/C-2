#pragma once
//AR15, Child class
#include "Firearm.h"
#include <iostream>

using namespace std;

class AR15 :public Firearm
{
public:
	AR15();//constructor
	void attack();//function 
	
	~AR15();//deconstructor


};

