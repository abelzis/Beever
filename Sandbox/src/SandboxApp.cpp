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

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();

	delete sandbox;
}