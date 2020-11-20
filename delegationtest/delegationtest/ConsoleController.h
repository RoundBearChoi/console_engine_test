#pragma once
#include "olcConsoleGameEngine.h"
#include "Specs.h"
#include "Updater.h"

namespace RB
{
	class ConsoleController : public olcConsoleGameEngine
	{
	private:
		Specs specs;
		Updater* updater = nullptr;

		bool OnUserCreate() override
		{
			return true;
		}

		bool OnUserUpdate(float fElapsedTime) override
		{
			if (updater != nullptr)
			{
				updater->Update();
			}

			Fill(0, 0, specs.WidthCount, specs.HeightCount, PIXEL_SOLID, FG_WHITE);
			Fill(0, 0, 1, 1, PIXEL_SOLID, FG_GREEN);

			return true;
		}
	public:
		void SetUpdater(Updater &targetUpdater)
		{
			updater = &targetUpdater;
			updater->SetBuffer(m_bufScreen);

			m_sAppName = L"testing";
		}

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