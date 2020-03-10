//Rose Albrecht 2300456 ealbrecht@chapman.edu GameOfLife
#include <iostream>
//#include "Grid.h"
//#include "Cell.cpp"
using namespace std;
int main()
{
	int columns;
	int rows;
	//add in game type options
	cout<<"what game version would you like to play?"<<"\n";
	cout<<"options include donut, mirror, or classic"<<"\n";
	string gameMode;
	cin>> gameMode;
	cout<<"would you like to provide a map file"<<"\n";
	cout<<"for a map of the world in which the"<<"\n";
	cout<<"simulation would occur? y or n"<<"\n";
	char inputChoice;
	cin>> inputChoice;
	/*if (inputChoice == 'y')
	{
		cout<<"what is the name of the file you would like read?"<<"\n";
		cout<<"please insure that your input file is as follows:"<<"\n";
		cout<<"rows"<<"\n";
		cout<<"columns"<<"\n";
		cout<<"empty cells as '-' living cells as 'X'"<<"\n";
		cout<<"each row of cells should be a new line in the input file"<<"\n";		
		cin>>fileName;
		//read the file enough to get height and width
		Grid::WorldGenerator(height, width, "file", fileName);
		//implament something here to input the file and use it and a array method to make the necessary 2D array
	}*/
	if (inputChoice == 'n')
	{
		cout<<"how many rows would you like?"<<"\n";
		cin>> rows;
		cout<<"how many columns would you like?"<<"\n";
		cin>> columns;
		cout<<"what population density would you like(choose a number between 0 and 1)?"<<"\n";
		double popDensity;
		cin>> popDensity;
		//Grid::WorlGenerator(rows, columns, popDense)
		//implament something that will generate the array
		char world[rows][columns];
		//cout << world;
		int populatedCells = popDensity * (rows*columns);
		int actuallyPopulated = 0;
		while (actuallyPopulated <= populatedCells)
		{
			int xcoord = (rand() % columns) + 1;
			int ycoord = (rand() % rows) + 1;
			if ((world[xcoord][ycoord]) != 'X')
			{
				world[xcoord][ycoord] = 'X';
				actuallyPopulated += 1;
			}
		}

		//cout << world; 
		for (int h = 1; h <= rows; h++)
		{
			for (int w = 1; w <= columns; w++)
			{
				if ((world[w][h]) != 'X')
				{
					world[w][h] = '-';
				}
				cout << world[w][h];
			}
			cout << "\n";
		}
		//https://stackoverflow.com/questions/12311149/how-to-print-2d-arrays-in-c

	}
	/*int WorldGenerateFromFile(int height, int width, string readInFile)
	{
		public:
			char world[height][width];
			ifstream inputfile;
			inputfile.open(filename);
			char world[height][width] = //what we initiate the grid as
			ifstream inputfile;
		inputfile.open(filename);
	}*/
	
		
}