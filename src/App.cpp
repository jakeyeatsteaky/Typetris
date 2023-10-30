#include "App.h"
#include <iostream>
#include "SDL2/SDL.h"

#include <assert.h>

App::App() :
    m_isRunning(false)
{
    CreateRenderer();
}

App::~App() {
    delete m_renderer;
    for(auto& items : m_objects)
        delete items;
}

App* App::GetInstance() 
{
    return this;
}


void App::Setup()
{
    if (!m_renderer->InitSuccess())
    {
        std::cout << "Window creation failed\n";
        return;
    }

    SetIsRunning(true);

    Rect* rect1 = new Rect(100, 100, 100, 100, 0x00ff0000);
    m_objects.push_back(rect1);
    std::cout << "App successfully Set Up\n";
}

void App::Input()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) 
        {
            case SDL_QUIT:
                m_isRunning = false;
                break;
            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_ESCAPE)
                    m_isRunning = false;
                break;
        }

    }
}

void App::Update()
{
   m_renderer->Update(); 
}

void App::Render()
{
    m_renderer->Render();
}

void App::Destroy()
{
    // Deallocate resources to subsystems 
    std::cout << "App successfully destroyed\n";
}


bool App::IsRunning() {
    return m_isRunning;
}

void App::SetIsRunning(bool isRunning) {
    m_isRunning = isRunning;
}

void App::CreateRenderer() 
{
    m_renderer = new Renderer();
}



