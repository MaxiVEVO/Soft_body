#pragma once
#include "Point.h"
class Spring : public Drawable
{
public:
	Spring(Point& a, Point& b, float k, float rLength, float damping);
	float forceTotal();
private:
	float forceSpring();
	float forceDamping();
	Point& m_p1;
	Point& m_p2;
	float m_k;
	float m_rLength;
	float m_damping;
};

