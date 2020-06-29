#include <Beever.h>

class Sandbox : public Beever::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Beever::Application* Beever::CreateApplication()
{
	return new Sandbox();
}