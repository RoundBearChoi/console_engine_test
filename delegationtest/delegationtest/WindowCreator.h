#pragma once
#include "olcConsoleGameEngine.h"
#include "Specs.h"

namespace RB
{
	class WindowCreator : public olcConsoleGameEngine
	{
	private:
		bool OnUserCreate() override
		{
			return true;
		}

		bool OnUserUpdate(float fElapsedTime) override
		{
			return true;
		}
	public:
		void Create(Specs& specs)
		{
			ConstructConsole(
				specs.WidthCount,
				specs.HeightCount,
				specs.PixelsPerSquare,
				specs.PixelsPerSquare);
			Start();
		}
	};
}