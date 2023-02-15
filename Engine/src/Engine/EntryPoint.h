#pragma once

#ifdef ENGN_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{	
	printf("Engine Runnding");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif