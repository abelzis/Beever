#pragma once

#include "Core.h"

namespace Beever {
	class BEEVER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


