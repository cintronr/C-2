/*
Rico Cintron	
**************************************************OOPoly Modified with exceptions***************************************************
2/18/2017
University of Advancing Technology
*/

#include <iostream>
#include <string>
#include "Humanoid.h"
#include "Zombie.h"
#include "Vampire.h"
#include <cstdlib>


using namespace std;



int main() {
	//Greeting
	cout << "**************************************************************" << endl;
	cout << "Hello and welcome to my OO w/polymorphism program!" << endl;
	cout << "**************************************************************" << endl;
	char again = 'Y';//while loop char
	while (again == 'y' || again == 'Y')
	{
		cout << "You can make your selections from the following menu:" << endl;
		cout << "Enter a number larger than 7 if you want to generate an error... ***Exception***" << endl;
		cout << "1. Create Humanoid.**********Exception*********" << endl;
		cout << "2. Create Zombie.******Exception for limbs!*********" << endl;
		cout << "3. Create Vampire." << endl;
		cout << "4. Print Humanoid stats." << endl;
		cout << "5. Print Zombie/Vampire stats with parent attributes (polymorphism)." << endl;
		cout << "6. Print Zombie/Vampire stats (NON polymorphism)." << endl;
		cout << "7.  ***Exception***" << endl;
		cout << "Make your selection using numbers 1-6 only:" << endl;
		int num;//switch integer 
		int humanHealthValue;//Parent int
		int humanLimbValue;//Parent int
		int zombieHealthValue;//Parent int
		int zombieLimbValue;//Parent int
		int vampireHealthValue;//Parent int
		int vampireLimbValue;//Parent int
		int zombieSpeed;//Child: Zombie string
		int smell;//Child: Zombie int
		int vampireStrength;
		int vampireSunTol;
		Humanoid human1;//Human Class creation
		Zombie zombie1;//Child Class creation
		Vampire vampire1;//Child class creation
		//Exception int
		int exceptionInt = 7;
		int numberOne;
		int numberTwo;
		int sum;
		int ExceptionIntTwo = 1;
		int ExceptionIntThree = 4;
		int ExceptionIntFour = 0;

		
		//*****************************************************************EXCEPTION #1*******************************************************************************
		try {
			cin >> num;
			if (num > exceptionInt) {
				throw 01;
			}
		}
		catch (int x) {
			cout << "Error 01: Non-Integer entered:" << x << endl;
		}
		switch (num)
		{
		case 1:
			cout << "Now creating humanoid!\n";

			cout << "Please enter ammount of limbs (0-4) desired:";
			cout << "************************************************Enter 5 or above to generate exception**********************************************************************" << endl;
			//////////////////////////////////////////////////////////////////////////////////////////Exception 3////////////////////////////////////////////////////////////////
			
			try {
				cin >> humanLimbValue;
				if (humanLimbValue > ExceptionIntThree) {
					throw 03;
				}
			}
			catch (int x) {
				cout << "Error 03: Integer exceeding allowed threshold:" << x << endl;
			}
	
			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if (humanLimbValue <= 0) {
				cout << "Please enter a value greater than 0";
			}
			
			
			else if (humanLimbValue > 4)
			{
				cout << "Please enter 0-4\n";
			}
			
			else {

				cout << "Valid input, accepted.\n";
			}
			human1.SetLimbs(humanLimbValue);
			cout << "Please enter ammount of health desired:";
			cin >> humanHealthValue;
			human1.SetHealth(humanHealthValue);
			system("cls");
			break;
		case 2:
			cout << "Now creating zombie!\n";
			//
			cout << "Please enter ammount of limbs (0-4) desired:" << endl;
			cout << "Enter number less than 0 to return exception." << endl;
			//////////////////////////////////////////////////////////////////////////////////////////////////Exception 4 (universal catch)/////////////////////////////////////////////////////////////
			try {
				cin >> zombieLimbValue;
				if (zombieLimbValue < ExceptionIntFour) {
					throw 04;
				}
			}
			catch (...) {//catch for all exceptions!
				cout << "Error 04: Integer entered is below minimum" << endl;
			}
			/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
			if (zombieLimbValue <= 0)
			{
				cout << "Please enter a value greater than 0";
			}
			else if (zombieLimbValue > 4)
			{
				cout << "Please enter 0-4\n";
			}
			else {

				cout << "Valid input, accepted.\n";
			}
			zombie1.SetLimbs(zombieLimbValue);
			cout << "Please enter ammount of health desired:";
			cin >> zombieHealthValue;
			zombie1.SetHealth(zombieHealthValue);
			//
			cout << "How fast is your zombie? (1-5 with 5 being the fastest!)\n";
			cin >> zombieSpeed;
			zombie1.setSpeed(zombieSpeed);
			cout << "Please enter sense of smell level (1-5 with 5 being the greatest!):\n";
			cin >> smell;
			zombie1.setSmell(smell);
			system("cls");
			break;
		case 3:
			cout << "Now creating Vampire!\n";
			//
			cout << "Please enter ammount of limbs (0-4) desired:";
			cin >> vampireLimbValue;
			if (vampireLimbValue <= 0)
			{
				cout << "Please enter a value greater than 0";
			}
			else if (vampireLimbValue > 4)
			{
				cout << "Please enter 0-4\n";
			}
			else {

				cout << "Valid input, accepted.\n";
			}
			vampire1.SetLimbs(vampireLimbValue);
			cout << "Please enter ammount of health desired:";
			cin >> vampireHealthValue;
			vampire1.SetHealth(vampireHealthValue);
			//
			cout << "Please enter sun tollerance level (1-5 with 5 being completely immune to sunlight!):\n";
			cin >> vampireSunTol;
			vampire1.setSunTol(vampireSunTol);
			cout << "Please enter the strength level!\n";
			cin >> vampireStrength;
			vampire1.setStrength(vampireStrength);
			system("cls");
			break;
		case 4:
			cout << "Your humanoid has this much health:" << human1.printInfoHealth() << "\n";
			cout << "Your humanoid has this many limbs:" << human1.printInfoLimbS() << "\n";
			break;
		case 5:
			cout << "Your zombie has this much health:" << zombie1.printInfoHealth() << "\n";
			cout << "Your zombie has this many limbs:" << zombie1.printInfoLimbS() << "\n";
			cout << "Your zombie's sense of smell is at level:" << zombie1.printInfo2() << "\n";
			cout << "Your zombie's speed level is at:" << zombie1.getSpeed() << "\n";
			cout << endl;
			cout << "Your vampire has this much health:" << vampire1.printInfoHealth() << "\n";
			cout << "Your vampire has this many limbs:" << vampire1.printInfoLimbS() << "\n";
			cout << "Your vampire's strength level is:" << vampire1.printInfo3() << "\n";
			cout << "Your vampire's sun tolerance level is:" << vampire1.printInfo3T() << "\n";
			break;
		case 6:
			cout << "Your zombie's sense of smell is at level:" << zombie1.printInfo2() << "\n";
			cout << "Your zombie's speed level is at:" << zombie1.getSpeed() << "\n";
			cout << endl;
			cout << "Your vampire's strength level is:" << vampire1.printInfo3() << "\n";
			cout << "Your vampire's sun tolerance level is:" << vampire1.printInfo3T() << "\n";
		case 7:
			cout << "Throw an exception"<< endl;
			cout << "Enter your first number:"<< endl;
			cin >> numberOne;
			cout << "To throw an exception, enter a 1."<< endl;
			cout << "Please enter your second number:"<< endl;
			cin >> numberTwo;
			///////////////////////////////////////////////////////////***************Exception 2***************/////////////////////////////////////////////////////////////////////////////////
			try {
				sum = numberOne + numberTwo;
				if (numberTwo == ExceptionIntTwo) {
					throw 2;
				}
			}
			catch (int a) {
				cout << "Error 02: Number two cannot be 1!:" << a << endl;
			}
			//
			cout << "Sum is:" << sum << endl;
			break;
			system("cls");


		default:
			cout << "Incorrect selection, please try again.\n";

			cout << "Would you like to run this program again? (y/n)\n";
			cin >> again; //while loop cin
			}//////// 1 of 3


		
	}//////// 2 of 3

	system("cls");
	system("pause");
	return 0;
}///////// 3 of 3

