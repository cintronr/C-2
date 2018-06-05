/*
Rico Cintron
Post-fix expression assignment
3/25/2017
University of Advancing Technology
*/

#include<string.h>
#include<iostream>
#include<stack>
#include<stdlib.h>
#include<stdio.h>
//Node creation
struct Node
{
	int data;//data portion of node
	Node* next;//pointer portion of node


};



//Pointer for previous node
Node* previous = NULL;

//Calculation function, takes one operator, two digits and performs calulation based on such operator. Returns value.
int operationCal(char oper, int num1, int num2);

//Determines if character is an operator
int operverify(char OPR);

//Determines if character is a number
int numverify(char numV);

//Add new node
void Shift(int N);

//Remove node
void UnShift();


//Scans the postfix expression, provides calulation
int scanPostFix(char* express, int length);

//Welcome function
void welcome();
//Function for Expression explanation.
void explanation();


using namespace std;




int main()
{

	int length;
	int calc;
	int a;
	
	char express[] = "1 2+ 5* 5/";//post fix expression
	welcome();//welcome function
	length = strlen(express);//String length (express) = length int
	calc = scanPostFix(express, length);//function call scanpostfix, accepting express and length, returns calc
	cout << "Post fix espression is:" << express << endl;//post fix dixplay
	explanation();//explanation function
	cout << "Result of post fix expression calculation is:" << calc << endl;//Result display
	a = getchar();

	system("pause");
	return 0;







}
//Calculation function, takes one operator, two digits and performs calulation based on such operator. Returns value.
int operationCal(char oper, int num1, int num2)
{
	
	if (oper == '-') return num1 - num2;// if operator is '-' perform subtraction, ect...
	else if (oper == '*') return num1 * num2;
	else if (oper == '/') return num1 / num2;
	else if (oper == '+') return num1 + num2;
	else
		cout << "Invalid operator encountered" << endl;// cout statement, if invalid operator is encountered
	return -1;
}

//Determines if character is an operator
int operverify(char OPR)
{
	
	if (OPR == '-' || OPR == '*' || OPR == '/' || OPR == '+') //if char is a listed operator, return 1
		return (1);
	else
		return (0);
}
//Determines if character is a number
int numverify(char numV)
{
	
	if (numV >= '0' && numV <= '9') return (1);// if char is greater than 0 and less than nine, return a 1
	else return(0);
}

//Delete node
void UnShift()
{
	
	Node* temp; //creates temp pointer
	if (previous == NULL) return; // if previous pointer is NULL return
	temp = previous;// sets temp equal to previous
	previous = previous->next; //



}

//Add node
void Shift(int N)
{
	
	Node* temp = (Node*)malloc(sizeof(Node*)); //Creates pointer temp, allocates block of memory, allowing for return of pointer to start of block
	temp->data = N; //accesses temps data portion, assigns int n to data portion
	temp->next = previous; // accesses temps next pointer, assigns previous pointer
	previous = temp; //sets previous equal to temp
}

int scanPostFix(char* express, int length)
{
	
	int num1, num2, calc; //creates integers for calculations
	// creates temp nodes
	Node* temp;
	Node* temp1;
	Node* temp2;
	

	for(int i = 0; i < length; i++)
	{ 
	//Read expression, Should we encounter a space or ',' proceed to other verication operations
		if (express[i] == ' ' || express[i] == ',') continue;
		//Should we encounter an operator, unshift two numbers and do operation and return sum.
		else
			if (operverify(express[i]))
			{
				//unshift two values
				temp1 = previous;//sets temp1 to previous pointer
				num2 = temp1->data;//number 2 equals, temp1 data
				UnShift();//remove node

				temp2 = previous; //sets temp2  to previous pointer
				num1 = temp2->data; //number 1 equals temp 1 data
				UnShift();//remove node

				//Do calculation
				calc = operationCal(express[i], num1, num2);
				//shift sum 
				Shift(calc);
			}
else
if (numverify(express[i]))//if statement utilizing number verification, with expression position
{

int number = 0;
					
while (i < length && numverify(express[i]))//while loop accommodating more than one number
	{
		number = (number * 10) + (express[i] - '0');//multiply number by 10, division by 0 issue encountered here when not utilized
		i++;//increment i
	}
	i--;//decrement i
	Shift(number);//add number

	}

}
temp = previous;
//return data
return (temp->data);

	
	
	}





void welcome()
{
	cout << "******************************************************************************************************" << endl;
	cout << "Welcome. This program will evaluate a PostFix expression." << endl;
	cout << "******************************************************************************************************" << endl;






}

void explanation()
{
	cout << endl;
cout << "In this example below, I will convert the expression to one we would understand." << endl;
cout << "1+2 =3, 3*5 = 15, 15/5 = 3" << endl;
cout << endl;


}























