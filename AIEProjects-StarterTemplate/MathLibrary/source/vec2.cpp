#include "vec2.h"
#include "common.h"

namespace LML
{
	//--------------------------------
	// Constructors/Destructor
	//--------------------------------
	// Default
	vec2::vec2()
	{
		x = 0.f;
		y = 0.f;
	}

	// Overload
	vec2::vec2(float a_x, float a_y)
	{
		x = a_x;
		y = a_y;
	}
	
	// Destructor
	vec2::~vec2()
	{

	}

	//--------------------------------
	// Utility
	//--------------------------------
	// Member Dot Product
	float vec2::dot(vec2 other)
	{
		return x * other.x + y * other.y;
	}

	float vec2::dot(vec2 me, vec2 other)
	{
		return me.dot(other);
	}

	float vec2::magnitude()
	{
		return sqrt(x * x + y * y);
	}

	float vec2::magnitude(vec2 me)
	{
		return me.magnitude();
	}

	vec2 vec2::normalised()
	{
		float mag = magnitude();
		return vec2(x/mag, y/mag);
	}

	vec2 vec2::normalised(vec2 me)
	{
		return me.normalised();
	}

	void vec2::normalise()
	{
		float mag = magnitude();
		x /= mag;
		y /= mag;
	}

	void vec2::normalise(vec2 me)
	{
		me.normalise();
	}

	//--------------------------------
	// member operators
	//--------------------------------
	vec2 vec2::operator+(vec2 other)
	{
		return vec2(x + other.x, y + other.y);
	}
	
	vec2 vec2::operator-(vec2 other)
	{
		return vec2(x - other.x, y - other.y);
	}
	
	vec2 vec2::operator*(float other)
	{
		return vec2(x * other, y * other);
	}
	
	vec2 vec2::operator/(float other)
	{
		return vec2(x / other, y / other);
	}
	
	vec2 vec2::operator=(vec2 other)
	{
		x = other.x;
		y = other.y;
		return *this;
	}
	
	bool vec2::operator==(vec2 other)
	{
		return x == other.x && y == other.y;
	}
	
	bool vec2::operator!=(vec2 other)
	{
		return !(*this == other);
	}

	//--------------------------------
	// non-member operators
	//--------------------------------
	vec2 operator*(float me, vec2 other)
	{
		return vec2(me * other.x, me * other.y);
	}
	
	vec2 operator/(float me, vec2 other)
	{
		return vec2(me / other.x, me / other.y);
	}
}