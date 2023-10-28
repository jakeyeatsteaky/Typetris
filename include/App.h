#ifndef APP_H
#define APP_H
#include "SDL2/SDL.h"
#include <memory>

#include "RendererAPI.h"
#include "enumerations.h"

class App
{
public:
	App(); 
	~App();
	void Setup();
	void Input();
	void Update();
	void Render();
	void Destroy();


	void SetIsRunning(bool isRunning);
	bool IsRunning();
	void CreateRenderer();

private:
	Renderer* m_renderer;
	bool m_isRunning = false;

};


#endif
