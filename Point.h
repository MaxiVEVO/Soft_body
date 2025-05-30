#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
int const RADIUS = 5;
using namespace sf;
using namespace std;
class Point : public Drawable
{
public:
	Point(Vector2f pos,float mass, Vector2f velocity);
	void setPos(Vector2f pos) { m_pos = pos; }
	void setVelocity(Vector2f velocity) { m_velocity = velocity;  }
	Vector2f getPos() const { return m_pos; }
	Vector2f getVelocity() const { return m_velocity; }
	void draw(sf::RenderTarget& rt, sf::RenderStates states) const override { rt.draw(m_point, states); }
private:
	Vector2f m_pos;
	Vector2f m_velocity;
	Vector2f m_Force;
	float m_mass;
	CircleShape m_point;
};

