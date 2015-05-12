#include "vec2.h"
#include "mUtility.h"

vec2::vec2()
{
	x = 0;
	y = 0;
}

vec2::vec2(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

vec2::~vec2()
{

}

vec2::vec2(vec2 & a_other)
{
	x = a_other.x;
	y = a_other.y;
}

vec2 vec2::operator+(vec2 & a_other)
{
	return vec2(x + a_other.x, y + a_other.y);
}

vec2 vec2::operator-(vec2 & a_other)
{
	return vec2(x - a_other.x, y - a_other.y);
}

vec2 vec2::operator*(float & a_other)
{
	return vec2(x * a_other, y * a_other);
}

float vec2::dot(vec2 & lhs, vec2 & rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y;
}

float vec2::dot(vec2 & a_other)
{
	return vec2::dot(*this, a_other);
}

float vec2::magnitude(vec2 & a_vec)
{
	return sqrt(a_vec.x * a_vec.x + a_vec.y * a_vec.y);
}