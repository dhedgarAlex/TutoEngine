#pragma once

//#include "Application.h"
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOW

extern Hazel::Application * Hazel::CreateApplication();

int main(int argc, char **argv) {
	printf("HAZEL ENGINEs dhedgar ...\n");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOW