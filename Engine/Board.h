#pragma once

#include "Graphics.h"
#include "Location.h"

class Board
{
public:
	Board(Graphics& gfx);
	void DrawBorder(const Location& loc, Color c);
	void DrawCell(const Location& loc, Color c);
	void DrawSnake(const Location& loc, Color c);
	int GetGridWidth()const;
	int GetGridHeight()const;
	bool isWall(const Location& loc)const;
private:
	static constexpr int dimension = 15;
	static constexpr int width=40;
	static constexpr int height=30;
	Graphics& gfx;
};
