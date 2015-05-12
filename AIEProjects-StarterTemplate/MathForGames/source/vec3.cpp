#include "vec3.h"

vec3::vec3()
{
	x = 0;
	y = 0;
	z = 0;
}

vec3::vec3(float a_x, float a_y, float a_z)
{
	x = a_x;
	y = a_y;
	z = a_z;
}

vec3::vec3(vec3 & a_other)
{
	x = a_other.x;
	y = a_other.y;
	z = a_other.z;
}

vec3::~vec3()
{

}

vec3 vec3::operator+(vec3 & a_other)
{
	return vec3(x + a_other.x, y + a_other.y, z + a_other.z);
}

vec3 vec3::operator-(vec3 & a_other)
{
	return vec3(x - a_other.x, y - a_other.y, z - a_other.z);
}

vec3 vec3::operator*(float & a_other)
{
	return vec3(x * a_other, y * a_other, z * a_other);
}

