#pragma once
#include "ConsoleController.h"

namespace RB
{
	class Setup
	{
	private:
		ConsoleController consoleController;
		Updater updater;

	public:
		void Start()
		{
			consoleController.SetUpdater(updater);
			consoleController.Create();
		}
	};
}