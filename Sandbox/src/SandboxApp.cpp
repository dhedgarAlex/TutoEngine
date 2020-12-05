#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox(){}
	~Sandbox() {}
}; // !Sandbox

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}