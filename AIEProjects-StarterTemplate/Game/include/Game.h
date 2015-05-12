#pragma once

#include "Application.h"
class SpriteBatch;

class Game : public Application
{
public:
	// assets loaded in constructor
	Game(unsigned int windowWidth, unsigned int windowHeight, bool fullscreen, const char *title);

	// assets destroyed in destructor
	virtual ~Game();

	// update / draw called each frame automaticly
	virtual void Update(float deltaTime);
	virtual void Draw();

protected:
	SpriteBatch *m_spritebatch;

};

