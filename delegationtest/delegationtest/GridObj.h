#pragma once
#include "Color.h"

namespace RB
{
	class GridObj
	{
	protected:
		COLOR color = COLOR::FG_BLACK;
		char name[20] = { "none" };
	};
}