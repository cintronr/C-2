#pragma once
#include <iostream>
#include <string>
class Humanoid	{
public:
	Humanoid();
	Humanoid(int He, int li);
	virtual ~Humanoid();
	void SetLimbs(int Li) {
		LimbS = Li;
	}
	int GetLimbs() {

		return LimbS;

	}
	void SetHealth(int He) {
		Health = He;


	}
	int GetHealth() {

		return Health;

	}
	int printInfoHealth() {

		return Health;

	}
	int printInfoLimbS() {

		return LimbS;
	}

protected:
	int LimbS;
	int limbs;
	int Health;
};

