//Chair Class

#pragma once
#include <iostream>
using namespace std;
class Chair
{
public:
	void chairStat() {
		
		cout << "Chair is 40 inches tall." << endl;


	}

	Chair();//call constructor

	virtual ~Chair();//call destructor
};

