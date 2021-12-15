/*********************************************************
 * Gretel Rajamoney
 * Description: simplifies user inputted fraction
 * Input: numerator and denominator from the user
 * Output: gcd, simplified fraction
 * ******************************************************/

//imports libraries that will be used by the program
#include <iostream>
#include <string>
#include <cstdlib>

//calls all std so that it doesnt need to be retyped every line
using namespace std;

//calls all the necessary functions prior to the int main
int is_int(int &numerator, int &denominator);
int check_numerator(string numerator);
int check_denominator(string denominator);
bool to_lowest_terms(int &numerator, int &denominator);
int g_c_d(int numeratorfactor,int denominatorfactor);


//main function where all the listed functions are created
int main()
{
//creates a dowhile loop that re-runs if the user wants another conversion
	int compile = 1;
	do
	{
		//sets the numerator and denominator to zero as the default
		int numerator = 0;
		int denominator = 0;

		//function is_int checks that the inputted values are numbers
		is_int(numerator, denominator);
		//prints out the calculated gcd to the user
		cout << "The GCD of your fraction is: " << g_c_d(numerator,denominator) << endl;
		//function that sets the numerator and denominator to its lowest terms
		to_lowest_terms(numerator,denominator);
		//prints out the calculated lowest terms to the user
		cout << "The simplest form of your fraction is: " << numerator << "/" << denominator << endl;
		//ask user if they would like to perform another conversion
		cout << "Would you like to convert another fraction? (yes=1 no=0)" << endl;
		cin >> compile;
		//if 1 is inputted the dowhile loop will run again
	}
	while(compile);
}

//function that checks whether the inputted numerator and denominator are numbers
int is_int(int &numerator, int &denominator)
{
//creates variable to store numerator and asks user to input a value
string numeratorvalue;
cout << "Please enter your numerator: " << endl;
cin >> numeratorvalue;

//checks if the user inputted value is a number
int x = check_numerator(numeratorvalue);

//if it is not a number this loop will request a new number and then resave it into
//the numerator variable, and then check if it is a correct value & repeat if wrong
while(x) 
{
	cout << "Please enter a valid input for your numerator!" << endl;
	cin >> numeratorvalue;
	x = check_numerator(numeratorvalue);
}

numerator = atoi(numeratorvalue.c_str());

//creates variable to store denominator and asks user to input a value
string denominatorvalue;
cout << "Please enter your denominator: " << endl;
cin >> denominatorvalue;

//checks if the user inputted value is a number
int y = check_denominator(denominatorvalue);

//if it is not a number this loop will request a new number and then resave it into
//the denominator variable, and then check if it is a correct value & repeat if wrong
while(y)
{
	cout << "Please enter a valid input for you denominator!" << endl;
	cin >> denominatorvalue;
	y = check_denominator(denominatorvalue);
}
denominator = atoi(denominatorvalue.c_str());

}

//function that takes in the inputted string numerator
int check_numerator(string numerator)
{
	int x;

	for(int a = 0; a < numerator.length(); a++)
	{
		if(!((char(numerator.at(a)) >= '0')&&(char(numerator.at(a)) <= '9')))
		{
			x = 1;
		}
	}
	if(x == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//function that takes in the inputted string denominator
int check_denominator(string denominator)
{
	int x;

	if(denominator.length() == 1)
	{
		if(denominator.at(0) == '0')
		{
			return 1;
		}
	}
	for(int a = 0; a < denominator.length(); a++)
	{
		if(!((char(denominator.at(a)) >= '0')&&(char(denominator.at(a)) <= '9')))
		{
			x = 1;
		}
	}
	if(x == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//function that converts the numerator and denominator to its lowest term by using the
//calculated gcd
bool to_lowest_terms(int &numeratorfactor, int &denominatorfactor)
{
	int gcd;

	gcd = g_c_d(numeratorfactor, denominatorfactor);

	numeratorfactor = numeratorfactor/gcd;
	denominatorfactor = denominatorfactor/gcd;
	
	if(denominatorfactor == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//function that calculates the gcd
int g_c_d(int numeratorfactor, int denominatorfactor)
{
	if(denominatorfactor == 0)
	{
		return numeratorfactor;
	}
	return g_c_d(denominatorfactor, numeratorfactor % denominatorfactor);
}

