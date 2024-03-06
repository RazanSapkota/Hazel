#pragma once

extern Hazel::Application* Hazel::CreateApplication();

#ifdef HZ_PLATFORM_WINDOWS
void main(int argc, char** argv)
{
	printf("Hazel Application");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	
}
#else
#error Hazel only supports windows!
#endif //HZ_PLATFORM_WINDOWS
