#pragma once

#include "Board.h"



class Snake
{
private:
	class Segment
	{
	public:
		void InitHead(const Location& loc);
		void InitBody();
		void Follow(const Segment& next);
		void MoveBy(const Location& delta_loc);
		void Draw(Board& brd)const;
		const Location &GetLocation()const;
	private:
		Location loc;
		Color c;

	};
public:
	Snake(const Location& loc);
	void MoveBy(const Location& delta_loc);
	Location GetNextHeadLocation(const Location& delta_loc)const;
	void Grow();
	void Draw(Board& brd)const;
	bool isInTilenotEnd(const Location& target)const;
	bool isInTile(const Location& target)const;

private:
	static constexpr Color headColor = Colors::Yellow;
	static constexpr Color bodyColor = Colors::Green;
	static constexpr int nSegemntsMax = 100;
	Segment segments[nSegemntsMax];
	int nSegments = 1;

};