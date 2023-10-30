#ifndef RENDERER_API_H
#define RENDERER_API_H

#include <SDL2/SDL.h>

#include "enumerations.h"


namespace RendererUtil
{
	constexpr const char* WINDOW_TITLE = "Typetris";
	constexpr int WindowWidth = 800;
	constexpr int WindowHeight = 600;
	constexpr uint32_t CLEAR_COLOR = 0xff00ffff;
}

class Renderer {
public:

	Renderer();
	~Renderer();
	
	void Init();
	void Input() const;
	void Render() const;
	void Update();
	bool InitSuccess() const;

private:

	SDL_Window* m_window;
	SDL_Surface* m_surface;
	uint32_t* frontBuffer;
	uint32_t* backBuffer;
	bool m_initSuccess;

};
#endif