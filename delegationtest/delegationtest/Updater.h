#pragma once
#include <string>

namespace RB
{
	class Updater
	{
	private:
		CHAR_INFO* buffer;

	public:
		void SetBuffer(CHAR_INFO* bufScreen)
		{
			buffer = bufScreen;
		}

		void Update()
		{
			int test = 0;
		}
	};
}