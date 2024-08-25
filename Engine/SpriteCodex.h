#pragma once

#include "Graphics.h"

class SpriteCodex
{
public:
	void DrawBordergg(int x, int y, Graphics& gfx);
	static void DrawGameOver( int x,int y,Graphics& gfx );
	static void DrawTitle( int x,int y,Graphics& gfx );
};