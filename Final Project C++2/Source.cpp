/*
Rico Cintron
Final Project
4/19/2017
University of Advancing Technology
*/


//Preprocessor directives
#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include "AR15.h"
#include "BenchmadeInfidel.h"
#include "Firearm.h"
#include "Knife.h"
#include "AK47.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
//Boost PPDs
#include <boost/timer/timer.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/format.hpp>
//Funtion declarations
void openingScreen();
void menuOptions();
void armoryMenu();


using namespace std;




int main()
{
	boost::timer::cpu_timer timer;// Initiate measurement for boost.timer
	//Vector for Weapons
	std::vector<int> Weapons;
	//Start funtion for random number using clock time
	srand((unsigned int)time(NULL));
	//"Save File"
	ofstream saveFile;
	//Useful integers and char
	int i=0;
	int Zombies = rand() % (int)(15 + 1) - (1 + 1); //Int for zombies and Random number generation.
	
	char looper = 'y';//char for while loop
	openingScreen();//Opening screen function call
	//While loop for program
	while (looper == 'y' || looper == 'Y')//While loop for program
	{
		
	
	
	//Polymorphism 
	AR15 Colt;//AR15 Object Colt
	AK47 CenturyArms;//AK47 Object CenturyArms
	Firearm *ColtAR = &Colt;// Pointer to Firearm object, setting address to Colt
	Firearm *CenturyAK = &CenturyArms;//Pointer to Firearm object, setting address to Century Arms
	ColtAR->setDamage(5);//pass value to 5
	CenturyAK->setDamage(7);//pass value to object set to 7

	
	
	//integers for menus
	int menuSelection;
	int menuSelection2;

	
	
	menuOptions();//function call
	
	

	cin >> menuSelection;
	// Menu for user
		Firearm test;
			switch (menuSelection)
			{
			case 1:

				cout << "Visiting Armory" << endl;
				armoryMenu();//function call
				cin >> menuSelection2;
				switch (menuSelection2)
				{
				case 1:
					cout << "AR-15 Received" << endl;
					Weapons.push_back(i++);//increment weapons
					cout << "You have " << Weapons.size() << " weapons." << endl;
					Colt.attack();//polymorphism
					break;
				case 2:
					cout << "AK-47 Received!" << endl;
					Weapons.push_back(i++);//increment weapons
					cout << "You have " << Weapons.size() << " weapons." << endl;
					CenturyArms.attack();//polymorphism 
					break;
				case 3:
					cout << "Benchmade Infidel Received!" << endl;
					Weapons.push_back(i++);//increment weapons
					cout << "You have " << Weapons.size() << " weapons." << endl;
					

					break;
				case 4:
					cout << "Exiting Armory." << endl;
					break;
				default:
					cout << "Invalid Entry!" << endl;

					break;


				}

				break;
			case 2:

				cout << "Looks bad!" << endl;
				cout << "There are " << Zombies << " zombies outside! " << "You have " << Weapons.size() << " weapons." << endl;
			
				if (Weapons.size() * 2 < Zombies)//Basic if statement to compare weapon size to number of zombies
				{

					cout << "You dont have enought weapons!" << " You need at least: " << Zombies / 2 << endl;

				}
				else
				{

					cout << "You have enough weapons! Let's wage war!" << endl;

				}
				break;
			case 3:
				cout << "Waging War!" << endl;
				if (Weapons.size() * 2 >= Zombies)
				{

					cout << "BANG! BANG! BANG!..." << endl;
					cout << endl;
					cout << "Zombies eliminated!" << endl;
					cout << endl;
					cout << "Your Geiger Counter Radiation Detector is beeping, 50mSv! Get to your bomb Shelter immediately!" << endl;


				}
				else
				{

					cout << "You are unarmed. You didn't visit the Armory." << endl;
					HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "You have died!";

				}
				break;
			case 4:
				cout << "Welcome to the Bomb Shelter" << endl;
				if (Weapons.size() * 2 >= Zombies)
				{

					cout << "You made it just in time! You won!" << endl;

				}
				else
				{

					cout << "You need to be fighting zombies! Get out." << endl;

				}
				break;
			case 5:
				//Output stats to file
				cout << "Saving stats to Save.txt" << endl;
				saveFile.open("Save.txt");
				saveFile << "Weapons possessed:" << Weapons.size() << endl;
				saveFile << "Zombies killed:" << Zombies << endl;
				saveFile.close();
				////////////////////////////////////
			
				//cout displaying timer
				cout << "Boost timer allows for gauging performance of code." << endl;
				cout << "Wall is elapsed wall clock time" << endl;
				cout << "CPU time: time spent running the game" << endl;
				cout << "User: Time spent waiting for user input" << endl;
				cout << timer.format() << '\n';
				///////////////////////////////////
				cout << "Thanks for Playing!" << endl;
				break;
			default:
				cout << "Invalid Entry." << endl;
				break;
			}


			//End try catch



			cout << "Continue? (y/n)" << endl;
			cin >> looper;
		
}// end while loop
cout << "Thanks for using my program!" << endl;




	system("Pause");
	return 0;






}


void openingScreen()//Opening screen
{
	

	
	
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout << "*****************************************THE ARMORY**************************************" << endl;
	string name;
	string test = " ";
	cout << "Enter your name:" << endl;
	//Exception handling
	try {
		cin >> name;

		if (name.compare(test) != 0)
		{

		}
		else
		{
			throw 1;
		}
	}
	catch (int x) {
		cout << "Invalid Entry: Exception 1!" << endl;
	}
	cout << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);//Change text color to red.
	cout << "Hello "<<name <<", your town has been attacked by";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);// Change text color to green for "Zombie".
	cout << " zombies";
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);//Back to red.
	cout << "!" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);//Change text back to white.
	cout << "In this program, you will take advantage of the armory and destroy the threat!" << endl;
	cout << "Are you up to the task?" << endl;
	system("pause");
	SetConsoleTextAttribute(h, FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);

	

}

void menuOptions()//menu options with color customization 
{
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_BLUE |FOREGROUND_RED| FOREGROUND_INTENSITY);
	cout << "Please make a selction." << endl;
	cout << "1. Visit the Armory!" << endl;
	cout << "2. Look outside." << endl;
	cout << "3. Wage War." << endl;
	cout << "4. Enter bomb Shelter." << endl;
	cout << "5. Save stats to file and quit." << endl;








}
void armoryMenu()//options for armory menu
{
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "Pick a weapon!" << endl;
	cout << "1. AR-15!" << endl;
	cout << "2. AK-47!" << endl;
	cout << "3. Benchmade Infidel! (Knife)" << endl;
	cout << "4. Exit Armory." << endl;
	






}



