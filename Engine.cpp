#include "Engine.h"
Engine::Engine() 
{
	int pixelWidth = VideoMode::getDesktopMode().width;
	int pixelHeight = VideoMode::getDesktopMode().height;
	VideoMode vm(pixelWidth, pixelHeight);
	m_Window.create(vm, "sticks and rocks", Style::Default);
}
void Engine::run()
{
	while (m_Window.isOpen())
	{
		input();
		update();
		draw();
	}
}
void Engine::update()
{

}
void Engine::input()
{
	Event event;
	while (m_Window.pollEvent(event))
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape)) m_Window.close();
		if (event.type == sf::Event::Closed) m_Window.close(); 
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{

				}
				if (event.mouseButton.button == sf::Mouse::Right)
				{

				}
			}
	}
}

void Engine::draw()
{
	m_Window.clear();


	m_Window.display();
}