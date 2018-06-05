/*
Rico Cintron
Word Search
2/10/2017
University of Advancing Technology
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<string>
#include <iterator>
#include <list>
//#include <algorithm>

//Length comparison for vectors
bool compVect(const std::string &lhs, const std::string &rhs)
{
	return (lhs.size() == rhs.size()) ? lhs < rhs
		: lhs.size() < rhs.size();
}


using namespace std;



int main() {

	cout << "*******************************************************************************************************************" << endl;
	cout << "Hello and welcome to word search!" << endl;
	cout << "We will take one text file, which contains ten words, and compare to the contents of a second text file." << endl;
	cout << "We will use vectors to hold the data from the text files passed in." << endl;
	cout << "*******************************************************************************************************************" << endl;
	cout << endl;

	vector <string> firstFileHold;//Vector for holding contents of first file.
	vector<string>::const_iterator cITER;//Vector for iterating through first file
	vector<string> secondFileHold;//Vector for holding contents of second file.
	vector<string>::const_iterator cITER2;//Vector for iterating through second file.
	ifstream a;//file 1
	a.open("fileOne.txt");//open file 1
	string data; // string for data
	while (a >> data)//enable data readin from file
	{
	firstFileHold.push_back(data);
	}
	cout << "Behold, the words from your first file(now in a vector)! " << endl;// cout statement notifying that books are now in vector
	for (cITER = firstFileHold.begin(); cITER != firstFileHold.end(); cITER++)//vector print 
	{
		cout <<  *cITER << ",";
	}
	cout << endl;
	//begin second file readin and display
	ifstream b;//file 2
	b.open("fileTwo.txt");//open file 2
	string data2; //string for data 
	while (b >> data2)//enable data read from second file
	{
		secondFileHold.push_back(data2);
	}
	cout << "The words in your file #2(now in second vector)would have been displayed, but it is too much! " << endl;// cout statement notifying that books are now in vector
	for (cITER2 = secondFileHold.begin(); cITER2 != secondFileHold.end(); cITER2++)//vector print 
	{
		//commented out the cout command which would have displayed the contents of file(vector2), as there is too much text which appears unorganized.
		//cout << *cITER2;
	
		
	}
	//vector 1 sort
	std::sort(firstFileHold.begin(), firstFileHold.end(), compVect);
	//vector 2 sort
	std::sort(secondFileHold.begin(), secondFileHold.end(), compVect);
	//
	std::list<std::string> intersection;
	std::set_intersection(firstFileHold.begin(), firstFileHold.end(),
	secondFileHold.begin(), secondFileHold.end(),
	std::back_inserter(intersection),compVect);
	cout << endl;
	cout << "The words found in your first file and second file are as follows:" << endl;
	//Output to operate on file
	ofstream outputFile;
	//open file "OutputFile.txt"
	outputFile.open("OutputFile.txt");
	//cout of vector 1 and 2 comparison
	for (const auto& w : intersection)
	std::cout << w << " " << endl;
	//comparison of vector 1 and 2 sent to file.
	for (const auto& w : intersection)
	outputFile << w << " " << endl;
	
	
	


	system("pause");
	return 0;








}

