#include "Game1.h"
#include "SpriteBatch.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"

Game1::Game1(unsigned int windowWidth, unsigned int windowHeight, bool fullscreen, const char *title) : Application(windowWidth, windowHeight, fullscreen, title)
{
	m_spritebatch = SpriteBatch::Factory::Create(this, SpriteBatch::GL3);
	m_background = new Texture("./Images/Background1.png");
	backgroundPos = LML::vec2(GetWindowWidth() / 2.0f, GetWindowHeight()/ 2.0f);

	m_playerTexture = new Texture("./Images/nodeTexture.png");
	playerPos = LML::vec2(GetWindowWidth() / 2.0f, GetWindowHeight() / 2.0f);
}

Game1::~Game1()
{
	delete m_background;

	SpriteBatch::Factory::Destroy(m_spritebatch);
}


void Game1::Update(float deltaTime)
{
	if (GetInput()->IsKeyDown(GLFW_KEY_ESCAPE))
		Quit();
}

void Game1::Draw()
{
	// clear the back buffer
	ClearScreen();

	m_spritebatch->Begin();

	// Background
	m_spritebatch->DrawSprite(m_background, backgroundPos.x, backgroundPos.y, GetWindowWidth(), GetWindowHeight());
	
	// Player
	m_spritebatch->DrawSprite(m_playerTexture, playerPos.x, playerPos.y);
	
	m_spritebatch->End();
}