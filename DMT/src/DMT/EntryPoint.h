#pragma once

#ifdef DMT_PLATFORM_WINDOWS

extern DMT::Application* DMT::CreateApplication();
int main(int argc, char** argv ) {
	printf("DMT ENGINE STARTED");
	auto app = DMT::CreateApplication();
	app->Run();
	delete app;
}
#endif