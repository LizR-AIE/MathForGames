#pragma once

class vec3
{
	// Constructors
	vec3();
	vec3(float x, float y, float z);

	// Copy Constructor
	vec3(vec3 & other);

	// Destructor
	~vec3();
	
	// Operators
	vec3 operator+(vec3 & other);
	vec3 operator-(vec3 & other);
	vec3 operator*(float & other);

	// Variables
	float x;
	float y;
	float z;
};

