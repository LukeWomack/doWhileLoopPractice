// Name: Luke Womack
// Date: 10/11/22
// Title: DoWhileLoopPractice
// Description: Practice for the Do While Loops in C++ 

#include <iostream>
#include <string>

using namespace std;

// Named Constants

int main()
{
	// Variable Declaration

	int i;

	// Example 1
	cout << "Do While Loop Example 1" << endl;

	i = 11;
	do
	{

		cout << "I" << " " << endl;
		i = i + 5;

	} while (i <= 30);

	cout << "Out of the loop!" << endl << endl;

	// Example 2
	do
	{


		cout << "Do while looop example 2" << endl;
		cout << "Enter a score between 0 and 50" << endl;
		cin >> score;
		cout << endl;

		if (score < 0 || score >50)
			cout << "It is an invalid input";
	} while (score < 0 || score > 50);

	cout << "That was a valid input!" << endl;

	// Example 3

	cout << "Do While loop example 2" << endl;

	do {

		cout << "Menu options" << endl << endl;
		cout << "1- option 1" << endl;
		cout << "2- option 2" << endl;
		cout << "3- option 3" << endl;

		cout << "Enter your choice: " << endl;
		cin >> choice;
		
	} while (choice < 1 || choice > 3)
		cout << "Your choice is: " << choice << endl;


	return 0;
}