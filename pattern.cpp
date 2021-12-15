/***************************************************************
 * Gretel Rajamoney
 * Part 2 of Assignment 3
 * Input: number of asterisks & spaces
 * Output: asterisks & spaces
 * ************************************************************/

//inports libraries for the function to use
#include <iostream>

using namespace std;

//creates a void function that is called patter
//x represents rows and y represents columns
void pattern(int x, int y)
{
	if(x > 0)
	{
		pattern(x - 2, y + 1);
	
	for(int a = 0; a < y; a++)
	{
		cout << "  ";
	}
	for(int a = 0; a < x; a++)
	{
		cout << "* ";
	}
	cout << endl;
	pattern(x - 2, y + 1);
	}
}

int main()
{
	//creates variables for the asterisks and spaces
	int asterisks;
	int spaces;

	//asks user how many asterisks they want and saves it
	cout << "How many asterisks would you like?" << endl;
	cin >> asterisks;
	
	//asks user how many spaces they want and saves it
	cout << "How many spaces would you like?" << endl;
	cin >> spaces;

	//calls in the function created above using saved user inputs
	pattern(asterisks,spaces);

	return 0;
}
