/********************************
 * Gretel Rajamoney
 * 11/25/2019
 * Description: asks user whether what operation they would like to perform and then either calculates whether of not it is a palindrome, prints each word and how many times they appear, or count how many times a specific word the user inputs appears.
 * Input: sentence from user, and possible word to search for
 * Output: how many times they appear, whether or not it is a palindrome
 * ****************************/


//libraries inputted
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

//functions being initialized
char * get_sentence();
char * second_get_sentence();
bool is_letters_and_nums(char &g);
bool is_letters(char &g);
char * clear_string(char *word);
char * second_clear_string(char *word);
char * third_clear_string(char *word);
bool within_range(int x, int y, int z);
void palindrome(char *phrase);
int num_of_words();
bool word_count(char *value);
void frequency(int word_count, string * word_search, char *phrase);
string * word_search(int num);

char word;
int num;
char phrase;
int x,y,z;


int main()
{
	for(int x = 0; x < 10; x++)
	{
		int option;
		cout << "What operation would you like to perform? 1. palindrome detector 2. word frequency 3. given word frequency !!" << endl;
		cin >> option;
		get_sentence();
		
			if(option == 1)
			{
				char * phrase = get_sentence();
				palindrome(phrase);
			}
			else if(option == 2)
			{
				char * phrase = second_get_sentence();
				int numofwords = num_of_words();
				string * search = word_search(numofwords);
				frequency(numofwords, search, phrase);
			}
			else
			{	
				cout << "That is not an option!! Please input either 1, 2, or 3 !!" << endl;
				cin >> option;
			}
			
			int repeat;
			cout << "Would you like to perform this operation again? 1. yes 2. no !!" << endl;
			cin >> repeat;

			if(repeat == 1)
			{
			
			}
			else
			{
				break;
			}
	}

/**
char ** words = new char* [count(word)];
int r = count(word);
word[0] = strtok(str, " ");
for(int x = 1; x < r; x++)
{
	word[x] = strtok(NULL, " ");
}
for(int x = 0; x < r; x++)
{
	cout << word[x] << endl;
}
}
**/

}

//gets sentence from the user
char * get_sentence()
{
	char word[256];
	cout << "Please enter a sentence !!" << endl;
	cin.getline(word, 256);
	int size = strlen(word) + 1;
	char * phrase = second_clear_string(word);
	return phrase;
}

//checks whether the sentence is within the range
bool within_range(int x, int y, int z)
{
	if(z >= x && z <= y)
	{
		return true;
	}
}

//makes sure sentence only has numbers and letters and deletes the rest
bool is_letters_and_nums(char &g)
{
	if(!(within_range('A','Z', g) || within_range('a','z', g) || within_range('0','9', g)))
	{
		return false;
	}
	else
	{
		if(! within_range('a','z', g))
		{
			return true;
		}
		else
		{
			g = g - 32;
			return true;
		}
	}
}

//makes sure sentence is only letters and deletes the rest
bool is_letters(char &g)
{
	int compile = strlen(word);
	int count = 0;
	char * wordx = new char[compile];
	
	for(int x = 0; x < compile; x++)
	{
		if(is_letters_and_nums(word[x]))
		{
			wordx[count++] = word[x];
		}
	}
	wordx[count] = '\0';
	
	for(int x = 0; x < count; x++)
	{
		cout << wordx[x];
	}
	return wordx;
}

//clears non letter characters
char second_purge_string(char *word)
{
	int compile = strlen(word);
	int count = 0;
	char * wordx = new char[compile];
	
	for(int x = 0; x < compile; x++)
	{
		if(is_letters(word[x]))
		{
			wordx[count++] = word[x];
		}
	}
}

//clears non letter characters
char third_purge_string(char *search)	
{
	int compile = strlen(word);
	int count = 0;
	char * wordx = new char[compile];

	for(int x = 0; x < compile; x++)
	{
		if(is_letters(search[x]))
		{
			wordx[count++] = search[x];
		}
	}
	wordx[count] = '\0';
	
	for(int x = 0; x < compile; x++)
	{
		cout << wordx[x];
	}
	return wordx;
}

//counts the number of words in the sentence
int word_count(char *input)
{
	int g = 1;
	for(int x = 0; x < strlen(input); x++)
	{
		if(input[x] == ' ')
		{
			g++;
		}
	}		
	return g;
}

//asks user how many words they are attempting to search for
int num_of_words()
{
	int num = 0;
	string input;
	cout << "How many words would you like me to search for?" << endl;
	cin >> input;
	num = atoi(input.c_str());
	return num;
}

//asks user what words they would like to search for
string * word_search(int num)
{
	string * search;
	search = new string[num];
	string input;
	string str;
	
	for(int x = 0; x < num; x++)
	{
		cout << endl << "Please enter what words you would like me to search for?" << endl;
		cin >> input;
		search[x] = str;
	}
	return search;
}

//counts how many times each word appears
void frequency(int word_count, string * word_search, char *phrase)
{
	int z[word_count];
	
	for(int x = 0; x < word_count; x++)
	{
		z[x] = 0;
	}
	for(int a = 0; a < word_count; a++)
	{
		for(int b = 0; b < strlen(phrase); b++)
		{
			int pair;
			pair = 0;
			for(int c = 0; c < word_search[x].length(); c++)
			{
				if(phrase[b + c] == (word_search[x].at(c)))
				{
					pair++;
				}
				if(pair == word_search[x].length())
				{
					if(phrase[b + c + 1] >= 'a' && phrase[b + c + 1] <= 'z')
					{
						z[x] = z[x];
					}
					else if(phrase[b + c - pair] >= 'a' && phrase[b + c - pair] <= 'z')
					{
						z[x] = z[x];
					}
					else
					{
						z[x] = z[x] + 1;
					}
				}
			}
		}
	}

	cout << endl << "The Frequencies of your Inputted Words !!" << endl;
	for(int x = 0; x < word_count; x++)
	{
		cout << word_seach[x] << " : " << g[x] << endl;
	}
}
}
}


	
