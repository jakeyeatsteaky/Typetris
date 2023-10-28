#include "RendererAPI.h"
#include <iostream>

Renderer::Renderer()
{
	Init();
}

Renderer::~Renderer()
{
	SDL_FreeSurface(m_surface);
	SDL_DestroyWindow(m_window);
}

void Renderer::Init() 
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return;
    }

	m_window = SDL_CreateWindow(
		RendererUtil::WINDOW_TITLE, 
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		RendererUtil::WindowWidth, 
		RendererUtil::WindowHeight, 
		SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN);
	
	if (!m_window)
	{
		std::cout << "Error creating SDL window" << std::endl;
		return;
	}
	

	m_surface = SDL_GetWindowSurface(m_window);

	if(!m_surface)
	{
		std::cout << "Error creating SDL Surface from Window" << std::endl;
		return;
	}

	m_initSuccess = true;
}

void Renderer::Input() const
{

}

void Renderer::Render() const
{

}

void Renderer::Update()
{

}

bool Renderer::InitSuccess() const 
{
	return m_initSuccess;
}