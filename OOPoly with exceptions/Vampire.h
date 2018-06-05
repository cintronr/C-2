#pragma once
#include "Humanoid.h"
#include <string>

using namespace std;
class Vampire :
	public Humanoid
{
public:
	Vampire();
	Vampire(int He, int li, int st, int sunT);
	virtual ~Vampire();

	void setStrength(int st) {
		strength = st;
		
}
	int getStrength() {
		return strength;
	}
	void setSunTol(int sunT) {
		sunTol = sunT;
	}
	int getSunTol() {
		return sunTol;
	

	}
	int printInfo3() {
		
		return strength;
		
		
	}
	int printInfo3T() {

		return sunTol;

	}

private:
	int strength;
	int sunTol;

};

