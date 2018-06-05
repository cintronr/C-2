#include "Vampire.h"
#include <string>



Vampire::Vampire()
{
}

Vampire::Vampire(int He, int li, int st, int sunT) {
	//setting protected variables based on input
	strength = st;
	sunTol = sunT;
	cout << "Strenght:" << strength << endl;
	cout << "Sun tollerance:" << sunTol << endl;
}


Vampire::~Vampire()
{
}
