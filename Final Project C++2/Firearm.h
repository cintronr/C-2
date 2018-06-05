#pragma once
//Firearm class
#include<vector>
class Firearm
{
protected:
	
public:
	//integers 
	int capacity;
	int damage;
	int i;
	Firearm();//constructor call

	void setDamage(int a)
	{
		damage = a;
	}
	void AddWeapon();
	
	
	virtual ~Firearm();//deconstructor call
private:
	 
};

