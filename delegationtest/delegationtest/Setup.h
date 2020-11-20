#pragma once
#include "WindowCreator.h"

namespace RB
{
	class Setup
	{
	private:
		WindowCreator windowCreator;
		Specs specs;

	public:
		void Start()
		{
			windowCreator.Create(specs);
		}
	};
}