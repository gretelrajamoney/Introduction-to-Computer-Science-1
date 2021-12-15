#include <iostream>
#include <cstdlib>

using namespace std;

string ** initialize(int row, int column);
void delete_array(int **a, int row);
void show_board(string ** table, int rows, int columns);
bool is_int(char n);
void column_printer(int columns);



int main(int argc, char * argv[])
{
	if(argc != 4)
	{
		cout << "The number of values inputted is invalid." << endl;
		exit(0);
	}
	if(!(atoi(argv[1]) >= 1 && atoi(argv[1]) <=2))
	{
		cout << "The number of players inputted is invalid." << endl;
		return 0;
	}
	if(atoi(argv[2]) > 20)
	{
		cout << "You have inputted too many columns." << endl;
		return 0;
	}
	if(atoi(argv[3]) > 20)
	{
		cout << "You have inputted too many rows." << endl;
		return 0;
	}

	int columns = atoi(argv[2]);
	int rows = atoi(argv[3]);

	string ** table = initialize(rows, columns);
	column_printer(columns);
	show_board(table, rows, columns);
}


string ** initialize(int row, int column)
{
	string ** a = new string * [row];
	
	for(int x = 0; x < row; x++)
	{
		a[x] = new string[column];
	}
	return a;
}

void delete_array(int **a, int row)
{
	for(int x = 0; x < row; x++)
	{
		delete [] a[x];
	}
	delete [] a;
}

void show_board(string** table, int rows, int columns)
{
	for(int x = 0; x < rows; x++)
	{
		for(int y = 0; y < columns; y++)
		{
			if(x % 2 == 0 && y % 2 == 0)
			{
				cout << "|\033[30;47m " << table[x][y] << " ";
			}
			else if(x % 2 == 1 && y % 2 == 1)
			{
				cout << "|\033[30;47m " << table[x][y] << " ";
			}
			else
			{
				cout << "|\033[0m " << table[x][y] << " ";
			}
			cout << "\033[0m";
		}
		cout << endl;
	}
} 

/*
void moves(int player)
{
	int choose;
	cout << "Please select which column you would like to place your token!!" << endl;
	cin >> choose;
	if(choose > (columns + 1) || choose <= 0)
	{
		cout << "The column you have selected is invalid!! Please enter a new column!!" << endl;
		cin >> choose;
	}
	int num = 0;
*/
	

bool is_int(char n)
{
	if(n > 48 && n < 57)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void column_printer(int columns)
{
	for(int x = 1; x < (columns + 1); x++)
	{
		cout << " " <<  x << " ";
	}
	cout << endl;
}
