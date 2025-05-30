#include "Spring.h"
Spring::Spring(Point& a, Point& b, float k, float rLength, float damping) : m_p1(a), m_p2(b)
{
	m_k = k;
	m_rLength = rLength;
	m_damping = damping;
}
float Spring::forceTotal()
{
	return forceDamping() + forceSpring();	// eaier to read and write with extra fucntion 
}
float Spring::forceSpring()
{
	return m_k * (sqrt(pow((m_p2.getPos().x - m_p1.getPos().x), 2 ) + pow((m_p2.getPos().y - m_p1.getPos().y), 2)) - m_rLength);	// hooke's law,  k * (distance between 2 points  - resting length)
}
float Spring::forceDamping()
{
	Vector2f direction = m_p2.getPos() - m_p1.getPos();								// _
	direction.x = direction.x / (sqrt(pow(direction.x, 2) + pow(direction.y, 2)));	// |	getting normalized direction vector
	direction.y = direction.y / (sqrt(pow(direction.x, 2) + pow(direction.y, 2)));	// _

	Vector2f velocity = m_p2.getVelocity() - m_p1.getVelocity();					//		getting diffrence in velocities 
	return ((direction.x * velocity.x) + (direction.y * velocity.y)) * m_damping;	//		dot pruduct * damping force
}