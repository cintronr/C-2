#include "Humanoid.h"

using namespace std;

Humanoid::Humanoid()
{
}
Humanoid::Humanoid(int He, int li) {
	//setting protected variables based on input
	Health = He;
	limbs = li;
	cout << "Health:" << Health<< endl;
	cout << "Limbs:" << limbs<< endl;


}


Humanoid::~Humanoid()
{
}

