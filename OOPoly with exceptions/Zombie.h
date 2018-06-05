#pragma once
#include "Humanoid.h"
#include <string>
#include <iostream>


using namespace std;
class Zombie : 
	public Humanoid
{
public:
	Zombie();
	Zombie(int sm,int spe, int He, int li);
	virtual ~Zombie();
	//Accessors and mutators for child -(zombie) class.
void setSmell(int sm){
	smell = sm;
}
int getSmell() {
		return smell;
}
void setSpeed(int spe){
	speed = spe;
}
int getSpeed() {
	return speed;
	

}
int printInfo2() {

	return smell;
	

}
int printInfo2S(){
	return speed;
	
	


}

protected:
	int smell;
	int speed;


};

