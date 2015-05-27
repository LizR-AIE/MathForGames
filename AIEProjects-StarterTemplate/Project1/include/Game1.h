
/*-----------------------------------------------------------------------------
Author:			Elizabeth Rowlands
Description:	Project that uses my math library
-----------------------------------------------------------------------------*/
#ifndef GAME1_H
#define GAME1_H

#include "Application.h"
class SpriteBatch;

#include "vec2.h"

class Game1 : public Application
{
public:

	// assets loaded in constructor
	Game1(unsigned int windowWidth, unsigned int windowHeight, bool fullscreen, const char *title);

	// assets destroyed in destructor
	virtual ~Game1();

	// update / draw called each frame automaticly
	virtual void Update(float deltaTime);
	virtual void Draw();

protected:
	SpriteBatch *m_spritebatch;

	Texture *m_background;
	LML::vec2 backgroundPos;
	
private:
	Texture *m_playerTexture;
	LML::vec2 playerPos;

};

#endif