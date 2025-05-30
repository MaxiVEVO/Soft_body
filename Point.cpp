#include "Point.h"
Point::Point(Vector2f pos, float mass, Vector2f velocity)
{
	m_pos = pos;
	m_point.setRadius(RADIUS);
	m_point.setPosition(m_pos);
	m_point.setOrigin(RADIUS, RADIUS);
	m_velocity = velocity;
	m_Force = { 0,0 };
	m_mass = mass;
}
