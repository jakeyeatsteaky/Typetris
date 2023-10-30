#include <iostream>

#include "App.h"
#include "enumerations.h"

#if 0
	TODO:

		[ ] Render a square.  Maybe a function which can take coordinates
		[ ] Make app singleton so it can be accessed by the Renderer
		
#endif

static App app;

int main([[maybe_unused]] int argc, [[maybe_unused]] char* argv[])
{
	app.Setup();

	while (app.IsRunning())
	{
		Uint32 start = SDL_GetTicks();

		app.Input();
		app.Update();
		app.Render();

		Uint32 end = SDL_GetTicks();
		Uint32 diff = end - start;

		double fps = diff ? 1000.0 / (double)diff : 1000.0;
		if(SDL_GetTicks() % 1000 == 0)
			std::cout << "\t" << fps << std::endl;
	}

	app.Destroy();

	return 0;

}