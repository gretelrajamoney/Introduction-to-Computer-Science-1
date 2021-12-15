/***********************************************************
 * Program: assignment1.cpp
 * Author: Gretel Rajamoney
 * Date: 10/8/2019
 * Description: This program calculates the gross income and taxes that must be paid by a car salesperson, as well as the remaining income.
 * Input: monthly salary, number of months worked in a year, cost of a car, number of cars sold, number of misconducts observed, tax year, and state
 * Output: gross income, taxes, and remaining income
*************************************************************/
#include <iostream>  //contains inputs (cin) and outputs (cout)
#include <ctime> //contains time()
#include <cstdlib> //contains rand() and srand()
#include <math.h> //contains pow()



using namespace std; //makes it so that we dont need to use the prefix 'std'
int main()
{                   //the following lines of code create integer and character variables to store user inputs
		    //the 'cout' lines print out text questions to the user
		    //the 'cin' lines store the values inputted by the user into the created variables

	int monthlysalary;
 	cout << "What is your monthly salary?" << endl;
	cin >> monthlysalary;
	int nummonthsworked;
	cout << "How many months have you worked this year?" << endl;
	cin >> nummonthsworked;
	int carcost;
	cout << "What is the cost of the car?" << endl;
	cin >> carcost;
	int numcarssold;
	cout << "How many cars have you sold?" << endl;
	cin >> numcarssold;
	int nummisconducts;
	cout << "How many car misconducts have you observed?" << endl;
	cin >> nummisconducts;
	int taxyear;
	cout << "What is your tax year?" << endl;
	cin >> taxyear;
	char state;
	cout << "What state are you in?" << endl;
	cin >> state;


	if (nummonthsworked > 12) //this following if statement was created to ensure that the number of months worked is valid
				  //the if statement only runs if the user inputs a value greater that 12 months
				  //when the if statement runs it first prints out an error statement using 'cout'
	{			  //next it uses 'cin' to store the new value of months inputted by the user
		cout << "Please enter an accurate number within 12 months.\n";
		cin >> nummonthsworked;
	}
	if (taxyear != 2017 && taxyear != 2018) //this following if statement was created to ensure that the year is valid
					        //the if statement only runs if the user inputs a year other than 2017 and 2018
					        //when the if statement runs it first prints out an error statement using 'cout'
	{					//next it uses 'cin' to store the new taxyear inputted by the user
		cout << "Please enter a tax year that is either 2017 or 2018.\n";
		cin >> taxyear; 
	}
	if (state != 'A' && state != 'B' && state != 'C') //this following if statement was created to ensure that the state is valid
							  //the if statements only runs if the user inputs a state other than A,B, and C
							  //when the if statment runs it first prints out an error statement using 'cout'
	{						  //next it uses 'cin' to store the new state inputted by the user
		cout << "Please enter a state that is either A, B, or C.\n";
		cin >> state;
	}

	float annualsalary; //creates a float variable to store the annual salary
	annualsalary = monthlysalary*nummonthsworked; //calculates the annual salary and stores it into annualsalary
	srand(time(NULL)); //initializes that random number generator
	int randompercent; //creates an integer variable to store the generated percentage
	randompercent = rand() % 5 + 5; //generates a random number between 5 and 10
	float percentage; //creates a float variable to store the formatted percentage
	percentage = (randompercent / 100) + 1; //formats the generated number into decimal form
	float remaining; //creates a float variable to store the remainder added with the percentage
	remaining = carcost * randompercent; //calculates the remaining value and stores it into the variable
	cout << "The randomly generated percentage is: " << randompercent << "% making your profit: $" << remaining << endl; //prints calculations
	float profit; //creates a float variable to store the profit
	profit = numcarssold * (percentage - carcost); //calculates the profit and stores it into the variable
	int deductions; //creates an integer variable to store the deductions
	
	if (nummisconducts == 0) //if statement that runs to set deductions equal to 0 if 0 misconducts were inputted by the user
	{
		deductions = 0;
	}
	
	 if (nummisconducts >= 1) //if statement that runs if there are misconducts inputted by the user
       	{
		deductions = (100 * pow(2,(nummisconducts - 1))); //calculates how much the deductions are based upon the number of misconducts
	}


	float grossincome; //creates a float variable to store the gross income
	grossincome = annualsalary + (0.02 * profit) - deductions; //calculates the gross income and stores it into the variable
	cout << "Your calculated gross income is: $" << grossincome << endl; //prints out the gross income to the user

	float tax; //creates a float variable to store the tax values

	if (taxyear == 2017) //if statement that runs only if the taxyear inputted by the user is 2017
	{		     //the following if statements were created to compute the tax value based upon state and gross income
		if (state == 'A')
		{
			tax = 0.06 * grossincome;
		}
		if (state == 'B')
		{
			if (grossincome < 2000)
			{
				tax = 0;
			}
			else if ((grossincome >= 2000)&&(grossincome <= 10000))
			{
				tax = 100;
			}
			else 
			{
				tax = (0.1 * grossincome) + 100;
			}	
		}
		if (state == 'C')
		{
			if (grossincome < 3500)
			{
				tax = 0.05 * grossincome;
			}
			else if ((grossincome >= 3500)&&(grossincome < 9000))
			{
				tax = (0.07 * grossincome) + 175;
			}
			else if ((grossincome >= 9000)&&(grossincome < 125000))
			{
				tax = (0.09 * grossincome) + 560;
			}
			else
			{
				tax = (0.099 * grossincome) + 11000;
			}
		}

	}

	if (taxyear == 2018) //if statement runs only if the taxyear inputted by the user is 2018
	{		     //the following if statements were created to compute the tax value based upon state and gross income
		if (state == 'A')
		{
			tax = 0.08 * grossincome;
		}
		if (state == 'B')
		{
			if (grossincome < 2500)
			{
				tax = 0;
			}
			else if ((grossincome >= 2500)&&(grossincome <= 10000))
			{
				tax = 115;
			}
			else 
			{
				tax = (0.105 * grossincome) + 115;
			}
		}
		if (state == 'C')
		{
			if (grossincome < 3450)
			{
				tax = 0.05 * grossincome;
			}
			else if ((grossincome >= 3450)&&(grossincome < 8700))
			{
				tax = (0.07 * grossincome) + 172.5;
			}
			else if ((grossincome >= 8700)&&(grossincome <= 125000))
			{
				tax = (0.09 * grossincome) + 540;
			}
			else
			{
				tax = (0.099 * grossincome) + 11007;
			}
		} 

	}

	cout << "Your calculated tax is: $" << tax << endl; //prints out to user the calculated tax value

	float remainingincome; //creates a float variable to store the remaining income
	remainingincome = grossincome - tax; //calculates remaining income and stores it into the variable

	cout << "Your calculated remaining income is: $" << remainingincome << endl; //prints out to user the calculated remaining income
	
}
