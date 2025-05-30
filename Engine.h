#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
using namespace sf;
using namespace std;

class Engine
{
private:
	// A regular RenderWindow
	RenderWindow m_Window;
	//vector for Particles

	// Private functions for internal use only
	void input();
	void update();
	void draw();

public:
	// The Engine constructor
	Engine();

	// Run will call all the private functions
	void run();

};
