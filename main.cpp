#include "App.h"
#include "enumerations.h"

int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
	App app;
	app.Setup();

	while (app.IsRunning())
	{
		app.Input();
		app.Update();
		app.Render();
	}

	app.Destroy();

	return 0;

}