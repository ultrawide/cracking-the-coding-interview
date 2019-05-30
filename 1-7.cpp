#include <iostream>
#include <utility> // pair
#include <vector>

using namespace std;

const int ROWS = 5;
const int COLS = 5;

void appendZeros(int matrix[][COLS]);
void printMatrix(int matrix[][COLS]);

int main()
{
	int test1[ROWS][COLS]
	{
		{1, 2, 3, 4, 5},
		{1, 0, 2, 2, 3},
		{1, 2, 2, 2, 2},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 0}
	};

	appendZeros(test1);
	printMatrix(test1);
	return 0;
}

void appendZeros(int matrix[][COLS])
{
	// find coordinates of zeros
	vector <pair<int,int>> zCoordinates;
	pair <int, int> inputCoordinate; 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (matrix[i][j] == 0)
			{
				inputCoordinate.first = i;
				inputCoordinate.second = j;
				zCoordinates.push_back(inputCoordinate);
			}
		}
	}
	
	// DEBUGGING: print out coordinates
	for (auto it = zCoordinates.begin(); it !=  zCoordinates.end(); it++)
	{
		//cout << it->first << " " << it->second << endl;
	}

	// fill in rows/column with 0s 
	for (auto it = zCoordinates.begin(); it != zCoordinates.end(); it++)
	{
		int targetRow = it->first;
		int targetColumn = it->second;

		for (int i = 0; i < COLS; i++)
			matrix[targetRow][i] = 0;
		for (int j = 0; j < ROWS; j++)
			matrix[j][targetColumn] = 0;
	}	
}

void printMatrix(int matrix[][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
