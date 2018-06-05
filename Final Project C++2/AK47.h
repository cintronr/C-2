#pragma once
//Child, AK47 Class
#include "Firearm.h"
#include <iostream>


using namespace std;
class AK47 :public Firearm
{
public:
	AK47();
	void attack();
	~AK47();
};

