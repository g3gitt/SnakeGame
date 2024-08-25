#include "board.h"
#include<assert.h>
Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{}

void Board::DrawCell(const Location& loc, Color c) 
{
	//draw inside the box
	assert(loc.x >= 0);
	assert(loc.y >= 0);
	assert(loc.y < height);
	assert(loc.x < width);
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}
void Board::DrawSnake(const Location& loc, Color c)
{
	//draw inside the box
	assert(loc.x >= 0);
	assert(loc.y >= 0);
	assert(loc.y < height);
	assert(loc.x < width);
	gfx.SnakeDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}


int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

bool Board::isWall(const Location& loc) const
{
	return loc.x>=0&&loc.x<width&&loc.y>=0&&loc.y<height;
}

