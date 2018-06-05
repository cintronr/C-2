/*
Rico Cintron	
3/1/2017
Boost Library Implementation
UAT
*/


#include<iostream>
//lib 1
#include <boost/timer/timer.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/any.hpp>//Lib 2
//Lib 3
#include <boost/random.hpp>
#include <ctime>
#include <cstdint>
//Lib 4
#include <boost/swap.hpp>
#include <boost/array.hpp>
//Lib 5
#include <boost/algorithm/minmax.hpp>
#include <boost/tuple/tuple.hpp>
//Lib 6
#include <boost/format.hpp>


using namespace std;






int main() {

	boost::timer::cpu_timer timer;// Initiate measurement for boost.timer
	cout << "**********************************" << endl;
	cout << "Welcome to Library implementation!" << endl;
	cout << "Rico Cintron" << endl;
	cout << "3 / 1 / 2017" << endl;
	cout << "UAT" << endl;
	cout << "**********************************" << endl;
	cout << endl;
	char loopCode = 'y';
	while (loopCode == 'y' || loopCode == 'Y')//While loop for program
	
	{
		





		//Boost library #1 
		//Boost.any allows for universal value to become various type
		cout << "**********************************Library #1: Boost Any!**********************************" << endl;
		cout << "Demonstrates boost library Any, allows universal value to become integer, double, boolean, et cetra." << endl;
		cout << "any anyValue integer value:";
		boost::any anyValue = 20;
		std::cout << boost::any_cast<int>(anyValue) << '\n';
		cout << "any anyValue double value:";
		anyValue = 25.83;
		std::cout << boost::any_cast<double>(anyValue) << '\n';
		cout << "any anyValue boolean value:";
		anyValue = false;
		std::cout << std::boolalpha << boost::any_cast<bool>(anyValue) << '\n';
		cout << endl;


		//Boost library #2
		//random number generator
		cout << "***************************Library #2: Random number generator!****************************" << endl;
		cout << "Uses boost library to generate a random number." << endl;
		std::time_t now = std::time(0);
		boost::random::mt19937 gen{ static_cast<std::uint32_t>(now) };
		std::cout << "Random number generated:" << gen() << '\n';
		cout << endl;

		//Boost library #3
		cout << "**********************************Library #3: boost swap!**********************************" << endl;
		cout << "This boost library demonstrates intger and character swapping. Much more efficent than std swap" << endl;
		
		//Char declaration
		cout << "Characters entered are H followed by E, Now displaying swapped positon:" << endl;
		char c1 = 'H';
		char c2 = 'E';
		//swaps c1 and c2
		boost::swap(c1, c2);

		std::cout << c1 << c2 << '\n';// display c1 and c2
		//array for ints
		cout << "Integers entered are 7 followed by 8, Now displaying swapped positon:" << endl;
		boost::array<int, 1> a1{ { 7 } };
		boost::array<int, 1> a2{ { 8 } };
		//swaps ints
		boost::swap(a1, a2);
		//display ints
		std::cout << a1[0] << a2[0] << '\n';
		cout << endl;

		//Boost library #4
		cout << "**********************************Library #4: boost minmax**********************************" << endl;
		cout << "This library demonstrates integer value comparison using one function statement." << endl;
		//int declaration for value comparison
		int a;
		int b;
		cout << "We are going to use a boost library to compare the values of two numbers..." << endl;
		cout << "Please enter a number:" << endl;
		cin >> a;
		cout << "Please enter another number:" << endl;
		cin >> b;
		cout << endl;

		boost::tuples::tuple<const int&, const int&> t = boost::minmax(b, a);

		std::cout << "Lowest value is:" << t.get<0>() << '\n';
		std::cout << "Highest value is:" << t.get<1>() << '\n';
		//Boost.Format, placeholder usage for convenient output
		cout << endl;
		cout << "**********************************Library #5: Boost format********************************" << endl;
		cout << "Boost format using placeholders for convenience of changing formats (dates)." << endl;
		cout << "Date entered is:";
		std::cout << boost::format{ "%1%.%2%.%3%" } % 3 % 5 % 2017 << '\n';
		cout << endl;
		//cpu timer boost library #6
		cout << "**********************************Library #6: CPU TIMER!**********************************" << endl;
		cout << "Boost timer allows for gauging performance of code." << endl;
		cout << "Wall is elapsed wall clock time" << endl;
		cout << "CPU time: time spent running the code" << endl;
		cout << "User: time spent waiting for user input" << endl;
		
		// for loop 
		for (int i = 0; i < 5; i++) {
			cout << i << endl;
		}
		//cout displaying timer
		cout << timer.format() << '\n';
		cout << endl;



		cout << "Would you like to run the program again?(y/n)" << endl;
		cin >> loopCode;
		system("cls");
	}// End while loop
	 
	
	system("pause");
	return 0;

}