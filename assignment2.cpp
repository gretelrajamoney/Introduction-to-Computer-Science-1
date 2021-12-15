/**************************************************
 * Program: assignment2.cpp
 * Author: Gretel Rajamoney
 * Date: 10/27/2019
 * Description: creates several functions & tests them
 * Input: mainly hard coded into testing section
 * Output: pass fail as well as some others
 * ************************************************/
//inputs libraries

#include <iostream>
#include <string>

/*************************************************/
using namespace std;

//initializes all of the created functions
int check_range(int x);
bool is_capital(char y);
int is_even(int x);
int is_odd(int x);
int equality_test(int x,int z);
float float_is_equal(float num1, float num2);
int is_int(char y);
int numbers_present(string str);
char letters_present(string str);
int contains_substring(string str, string sub);
int word_count(string str);
int to_upper(string str);
int to_lower(string str);


int main()
{

//creates variables being inputted
int x;
char y;
int z;
float num1;
float num2;
string str;
string sub;

//testing sections which tests all of the created functions
//and uses hard coded inputs
cout << "Testing check_range(24)" << endl;
cout << "Expected: PASS" << endl;
int a = check_range(24);

cout << "Testing check_range(3)" << endl;
cout << "Expected: FAIL" << endl;
int b = check_range(3);

cout << "Testing is_capital(F)" << endl;
cout << "Expected: PASS" << endl;
char c = is_capital('F');

cout << "Testing is_capital(g)" << endl;
cout << "Expected: FAIL" << endl;
char d = is_capital('g');

cout << "Testing is_even(6)" << endl;
cout << "Expected: PASS" << endl;
int e = is_even(6);

cout << "Testing is_even(3)" << endl;
cout << "Expected: FAIL" << endl;
int f = is_even(3);

cout << "Testing is_odd(5)" << endl;
cout << "Expected: PASS" << endl;
int g = is_odd(5);

cout << "Testing is_odd(2)" << endl;
cout << "Expected: FAIL" << endl;
int h = is_odd(2);

cout << "Testing equality_testing(1,3)" << endl;
cout << "Expected: -1" << endl;
int i = equality_test(1,3);

cout << "Testing equality_test(2,2)" << endl;
cout << "Expected: 0" << endl;
int j = equality_test(2,2);

cout << "Testing equality_test(4,2)" << endl;
cout << "Expected: 1" << endl;
int k = equality_test(4,2);

cout << "Testing float_is_equal(3.8,3.6)" << endl;
cout << "Expected: PASS" << endl;
float l = float_is_equal(3.8,3.6);

cout << "Testing float_is_equal(5.9,4.3)" << endl;
cout << "Expected: FAIL" << endl;
float m = float_is_equal(5.9,4.3);

cout << "Testing is_int(7)" << endl;
cout << "Expected: PASS" << endl;
char n = is_int('7');

cout << "Testing is_int(f)" << endl;
cout << "Expected: FAIL" << endl;
char o = is_int('f');

cout << "Testing numbers_present(y78s0)" << endl;
cout << "Expected: PASS" << endl;
int p = numbers_present("y78s0");

cout << "Testing numbers_present(jdlwoc)" << endl;
cout << "Expected: FAIL" << endl;
int q = numbers_present("jdlwoc");

cout << "Testing letters_present(lk8h)" << endl;
cout << "Expected: PASS" << endl;
char r = letters_present("lk8h");

cout << "Testing letters_present(34567)" << endl;
cout << "Expected: FAIL" << endl;
char s = letters_present("34567");

cout << "Testing contains_substring(I love my TA's,love)" << endl;
cout << "Expected: PASS" << endl;
int t = contains_substring("I love my TA's","love");

cout << "Testing contains_substring(I love my TA's, hate)" << endl;
cout << "Expected: FAIL" << endl;
int u = contains_substring("I love my TA's","hate");

cout << "Testing word_count(I love my TA's)" << endl;
cout << "Expected: 4" << endl;
int v = word_count("I love my TA's");

cout << "Testing to_upper(gReTeL)" << endl;
cout << "Expected: GRETEL" << endl;
int w = to_upper("gReTeL");

cout << "Testing to_lower(GrEtEl)" << endl;
cout << "Expected: gretel" << endl;
int a2 = to_lower("GrEtEl");


}
/****************************************************
 * Function: check_range()
 * Descriptions: checks if number is within specified range
 * Parameters: int lower_bound int upper_bound int test_value
 * Return Type: boolean
 ****************************************************/
int check_range(int x)
{
	int upper_bound = 50;
	int lower_bound = 10;

	if(x >= lower_bound && x <= upper_bound)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

/*******************************************************
 * Function: is_capital()
 * Descriptions: checks if the characted is capitalized
 * Parameters: char letter
 * Return Type: boolean
 * *****************************************************/

bool is_capital(char y)
{
	if ((y >= 'A') && (y <= 'Z'))
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

/*******************************************************
 * Function is_even()
 * Descriptions: checks if the number is even
 * Parameters: int num
 * Return Type: boolean
 *******************************************************/

int is_even(int x)
{
	if(x % 2 == 0)
	{
		cout << "PASS" << endl;
	}
	else
	{	
		cout << "FAIL" << endl;
	}
}

/*******************************************************
 * Function: is_odd()
 * Descriptions: checks if the number is odd
 * Parameters: int num
 * Return Type: boolean
 * ****************************************************/
int is_odd(int x)
{
	if(x % 2 == 0)
	{
		cout << "FAIL" << endl;
	}		
	else
	{
		cout << "PASS" << endl;
	}
}

/*******************************************************
 * Function: equality_test()
 * Descriptions: tests if the numbers are equal, greater, or smaller
 * Parameters: int num1 int num2
 * Return Type: int
 * *****************************************************/

int equality_test(int x, int z)
{
	if (x < z) 
	{
		cout << "-1" << endl;
	}
	else if (x == z)
	{
		cout << "0" << endl;
	}
	else 
	{
		cout << "1" << endl;
	}
}

/********************************************************
 * Function: float_is_equal()
 * Descriptions: checks if numbers are within a certain range of eachother
 * Parameters: float num1 float num2 float precision
 * Return Type: boolean
 * ******************************************************/
float float_is_equal(float num1,float num2)
{
	if ((num1 - num2) <= 0.4)
	{
 		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}

/*********************************************************
 * Function is_int()
 * Description: check if string is an integer
 * Parameters: string num
 * Return Type: boolean
 * ******************************************************/

int is_int(char y)
{
	int z;
	z = int(y);
	if (y >= 48 && y <= 57)
	{
		cout << "PASS" << endl;
	}
	else
	{	
		cout << "FAIL" << endl;
	}
}

/************************************************************
 * Function: numbers_present
 * Description: checks if the string contains numbers
 * Parameters: string sentence
 * Return Type: boolean
 * *********************************************************/
int numbers_present(string str)
{
	int l = str.length();
	int count = 0;

	for (int x = 0; x < l; x++)
	{
		if (str.at(x) < '0' || str.at(x) > '9')
		{
		}
		else
		{
			count = count + 1;
		}
	}

	if (count > 0)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
}	

/*************************************************************
 * Function letters_present()
 * Description: checks if the string contains letters
 * Parameters: string sentence
 * Return Type: boolean
 * **********************************************************/
char letters_present(string str)
{
	int length = str.length();
	int count = 0;
	
	for (int x = 0; x < length; x++)
	{
		if ((str.at(x) >= 48) && (str.at(x) <= 57))
		{
		}
		else
		{
		count = count + 1;
		}
	}
		if (count > 0)
		{
		cout << "PASS" << endl;
		}
		else
		{
		cout << "FAIL" << endl;
		}
	
}

/*************************************************************
 * Function: contains_substring
 * Descriptions: checks if substring is within the string
 * Parameters: string sentence string substring
 * Return Type: boolean
 * **********************************************************/

int contains_substring(string str, string sub)
{
	int g;
	if (sub.length() > str.length())
	{
		cout << "FAIL" << endl;
	}
	else
	{
		for (int x = 0; x <= (str.length() - sub.length()); x++)
		{
			g = 0;
			for (int y = 0; y <= sub.length(); y++)
			{
				if (str[x + y] != sub[y])
				{
				g = 1;
				break;
				}
			}
			if (g == 0)
			{
			cout << "PASS" << endl;
			}
		}
	}
	cout << "PASS" << endl;
}
	
/*************************************************************
 * Funtion: word_count()
 * Description: counts how many words are in the string
 * Parameters: string sentence
 * Return Type: integer
 * **********************************************************/
int word_count(string str)
{
	int length = str.length();
	int count = 0;
	
	for (int x = 0; x < length; x++)
	{
		if (str.at(x) == 32)
		{
			count = count + 1;
		}
	}
	count += 1;
	cout << "The total number of words is: " << count << endl;
}

/*************************************************************
 * Function: to_upper()
 * Description: converts all lower case letters in string uppercase
 * Parameters: string sentence
 * Return Type: string
 * ***********************************************************/
int to_upper(string str)
{
int length = str.length();
int count = 0;

for (int x = 0; x < length; x++)
{
	if (str.at(x) >= 97 && str.at(x) <= 122)
	{
		str.at(x) = str.at(x) - 32;
	}
	}
	cout << str << endl;
}

/*************************************************************
 * Function: to_lower()
 * Description: converts all uppercase letter in string lowercase
 * Parameters: string sentence
 * Return Type: string
 * ***********************************************************/

int to_lower(string str)
{
int length;
length = str.length();
int count = 0;

for (int x = 0; x < length; x++)
{
	if (str.at(x) >= 65 && str.at(x) <= 90)
	{
		str.at(x) = str.at(x) + 32;
	}
	}
	cout << str << endl;
}



















