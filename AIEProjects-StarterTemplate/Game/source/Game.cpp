#include "Game.h"
#include "SpriteBatch.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"

Game::Game(unsigned int windowWidth, unsigned int windowHeight, bool fullscreen, const char *title) : Application(windowWidth, windowHeight, fullscreen, title)
{
	m_spritebatch = SpriteBatch::Factory::Create(this, SpriteBatch::GL3);

}

Game::~Game()
{
	SpriteBatch::Factory::Destroy(m_spritebatch);
}


void Game::Update(float deltaTime)
{

}

void Game::Draw()
{
	// clear the back buffer
	ClearScreen();

	m_spritebatch->Begin();

	// TODO: draw stuff.

	m_spritebatch->End();

}