#pragma once

#include <iostream>
#include <string.h>
#include <vector>

#include <SDL\SDL.h>
#include <glm\glm.hpp>

namespace glm {
	typedef tvec4<uint8_t> ui8_tvec4;
}

enum struct RaeState { ACTIVE, EXIT };

class Raether {
public:
	Raether();
	~Raether();

	void raeCreateWindow(const char* w_t, int w_width, int w_height);
	void raeRun();
	void raeDrawPix(int u, int v, std::vector<glm::ui8_tvec4>& PixData);
	void raeRenderBegin();
	void raeRenderEnd();
	void raeIP();
	void raeQuit();

	RaeState windowState;
private:
	SDL_Window* window;
	const char* title;
	int windowwidth;
	int windowheight;
	SDL_Renderer* renderer;
	SDL_Texture* texture;
	SDL_Rect screensize;
	

	void raeErrorList(std::string errorList);
	void raeInit();

};