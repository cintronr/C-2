/*
Rico Cintron
Multi-treading Assignment
3/31/2017
University of Advancing Technology
*/
#include<iostream>
#include<string>
#include<mutex>
#include<thread>


//function declarations
void ThreadOne();
void ThreadTwo();
void ThreadThree();
void ThreadFour();
void ThreadFive();
void ThreadSix();
void ThreadSeven();
void ThreadEight();
void ThreadNine();
void ThreadTen();
void greeting();


using namespace std;
//shared string
string sharedResource = " ";
 

int main()
{
	cout << "****************************************************************************" << endl;
	cout << "Rico Cintron" << endl;
	cout << "Multi-treading Assignment" << endl;
	cout << "3/31/2017" << endl;
	cout << "****************************************************************************" << endl;
	cout << endl;
	//Greeting
	cout << "Hello. Welcome to my multi-threading assignment." << endl;
	cout << "We are taking advantage of Multi-Threading. I have 10 threads, each pushing a new string into a shared string resource. To avoid each thread from running out of order, I utilized mutual exclusion." << endl;
	cout << "To help identify each thread, I used a T# for each. Without mutual exclusion, the statement was not in order. Using mutual exclusion seems to solve this problem with treads being out of order." << endl;
	cout << endl;
	//Thread call
	thread thread1(ThreadOne);
	thread thread2(ThreadTwo);
	thread thread3(ThreadThree);
	thread thread4(ThreadFour);
	thread thread5(ThreadFive);
	thread thread6(ThreadSix);
	thread thread7(ThreadSeven);
	thread thread8(ThreadEight);
	thread thread9(ThreadNine);
	thread thread10(ThreadTen);
	//mutex join
	thread1.join();
	thread2.join();
	thread3.join();
	thread4.join();
	thread5.join();
	thread6.join();
	thread7.join();
	thread8.join();
	thread9.join();
	thread10.join();
	system("pause");
	return 0;










}


mutex lock1;


//Function definitions 
void ThreadOne()
{
	lock1.lock();
	string sharedResource = "The";
	cout << "T1" << sharedResource;
	lock1.unlock();



}

void ThreadTwo()
{

	lock1.lock();
	string sharedResource = " Quick ";
	cout << "T2" << sharedResource;
	lock1.unlock();

}

void ThreadThree()
{

	lock1.lock();
	string sharedResource = " Brown ";
	cout << "T3" << sharedResource;
	lock1.unlock();


}

void ThreadFour()
{


	lock1.lock();
	string sharedResource = " Fox";
	cout << "T4" << sharedResource;
	lock1.unlock();

}

void ThreadFive()
{

	lock1.lock();
	string sharedResource = " Jumped ";
	cout << "T5" << sharedResource;
	lock1.unlock();

}

void ThreadSix()
{

	lock1.lock();
	string sharedResource = " Over ";
	cout << "T6" << sharedResource;
	lock1.unlock();

}

void ThreadSeven()
{


	lock1.lock();
	string sharedResource = " The";
	cout << "T7" << sharedResource;
	lock1.unlock();

}

void ThreadEight()
{

	lock1.lock();
	string sharedResource = " Lazy";
	cout << "T8" << sharedResource;
	lock1.unlock();

}

void ThreadNine()
{

	lock1.lock();
	string sharedResource = " Dogs ";
	cout << "T9" << sharedResource;
	lock1.unlock();


}

void ThreadTen()
{


	lock1.lock();
	string sharedResource = "Back ";
	cout << "T10" << sharedResource;
	lock1.unlock();
}

void greeting()
{

	

}