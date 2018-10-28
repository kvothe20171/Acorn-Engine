#pragma once

#ifdef AC_PLATFORM_WINDOWS

extern Acorn::Application* Acorn::CreateApplication();

int main(int argc, char** argv)
{
	printf("Acorn Engine\n");
	auto app = Acorn::CreateApplication();
	app->Run();
	delete app;
}

#endif
