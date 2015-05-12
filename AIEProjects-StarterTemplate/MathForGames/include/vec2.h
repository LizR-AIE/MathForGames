#pragma once

class vec2
{
public:
	// Constructors
	vec2();
	vec2(float x, float y);

	// Destructor
	~vec2();

	// Copy Constructor
	vec2(vec2 & other);

	// Operators
	vec2 operator+(vec2 & other);
	vec2 operator-(vec2 & other);
	vec2 operator*(float & other);

	static float dot(vec2 & lhs, vec2 & rhs);
	float dot(vec2 & other);

	float magnitude(vec2 & vec);

	// Variables
	float x;
	float y;
};

