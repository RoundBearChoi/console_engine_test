#pragma once
#include "olcConsoleGameEngine.h"
#include "Specs.h"
#include "Scene.h"

namespace RB
{
	class ConsoleController : public olcConsoleGameEngine
	{
	private:
		Specs specs;
		Scene scene;

		bool OnUserCreate() override
		{
			m_sAppName = L"testing";

			return true;
		}

		bool OnUserUpdate(float fElapsedTime) override
		{
			scene.Update();

			Fill(0, 0, specs.WidthCount, specs.HeightCount, PIXEL_SOLID, FG_WHITE);
			Fill(0, 0, 1, 1, PIXEL_SOLID, FG_GREEN);

			return true;
		}
	public:
		void Create()
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