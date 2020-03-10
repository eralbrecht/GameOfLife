	//Rose Albrecht 2300456 ealbrecht@chapman.edu GameOfLife
	//this file will allow us to get what the coordinates of the next cell over are and potentially retrieve them for us
#include "Grid.h"
#<iostream>
int main(){}
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
	char GetCellContents(int x, int y)
	{
		char cellContents = world[x, y]
		return cellContents
	}
	char WorldGenerateFromConsole(int height, int width, double popDensity)
	{
		char world[height][width];
		int populatedCells = popDensity / (height*width);
		int actuallyPopulated = 0;
		while (actuallyPopulated <= populatedCells)
		{
			int xcoord = (rand() % width) + 1;
			int ycoord = (rand() % height) + 1;
			if ((GetCellContents(xcoord, ycoord)) != 'X')
			{
				world[x][y] = X;
				actuallyPopulated += 1;
			}
		}
		for (int h = 1; h <= height; h++)
		{
			for (int w = 1; w <= width; w++)
			{
				if GetCellContents(w, h) != 'X'
				{
					world[w][h] = '-';
				}
			}
		}
		return world;
		
	}
