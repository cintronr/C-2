#include "Zombie.h"
#include <string>

using namespace std;

Zombie::Zombie()
{
}

Zombie::Zombie(int sm,int spe, int He, int li)
{
	smell = sm;
	speed = spe;
	cout << "Speed:" << speed << endl;
	cout << "Smell:" << smell << endl;
}


Zombie::~Zombie()
{
}
