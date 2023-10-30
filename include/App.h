#ifndef APP_H
#define APP_H
#include "SDL2/SDL.h"
#include <memory>
#include <vector>

#include "RendererAPI.h"
#include "enumerations.h"
#include "DataStructures.h"

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
	App* GetInstance();


	void SetIsRunning(bool isRunning);
	bool IsRunning();
	void CreateRenderer();

private:
	Renderer* m_renderer;
	bool m_isRunning = false;
	std::vector<Rect*> m_objects;

};


#endif
