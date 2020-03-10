//Rose Albrecht 2300456 ealbrecht@chapman.edu GameOfLife
#include <iostream>
using namespace std;
class Grid
{
private:
	char cellContents;
	char world[height][width];
	int populatedCells;
	int actuallyPopulated;
	int xcoord;
	int ycoord;
	int h;
	int w;
	int height;
	int width;
	char world;
public:
	Grid();
	~Grid();
	char GetCellContents(int x, int y);
	void WorldGenerateFromConsole(int h, int w, double popDensity);
};