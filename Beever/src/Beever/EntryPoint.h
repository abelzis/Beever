#pragma once

#ifdef BV_PLATFORM_WINDOWS

extern Beever::Application* Beever::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Beever::CreateApplication();
	app->Run();
	delete app;
}

#endif