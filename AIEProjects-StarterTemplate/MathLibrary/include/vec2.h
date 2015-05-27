#pragma once

#ifdef MATHLIBRARY_EXPORTS
	#define MATHLIB __declspec(dllexport)
#else
	#define MATHLIB __declspec(dllimport)
#endif
/*
	TODO:
		where V is a vector, M is a matrix and f is a float:
		- V = V + V
		- V = V – V
		- V = V x f
		- V = f x V
		- V = M x V
		- M = M x M
		- f = dot( V, V )
		- V = cross( V, V ) where V is a 3-D or 4-D vector
		- f = magnitude( V )
		- V = normalised( V )
		Your matrix objects should support being set up as
		rotation matrices, scale matrices and translation matrices.
		Your vectors and matrices should also have the ability to
		return or cast to an array of float.
*/
namespace LML
{
	class vec2
	{
	public:
		//--------------------------------
		// Constructors/Destructor
		//--------------------------------
		MATHLIB vec2();
		MATHLIB vec2(float x, float y);
		MATHLIB ~vec2();

		//--------------------------------
		// Utility
		//--------------------------------
		// dot product
		MATHLIB float dot(vec2 other);
		MATHLIB float static dot(vec2 me, vec2 other);

		// magnitude
		MATHLIB float magnitude();
		MATHLIB float static magnitude(vec2 me);
		
		// normalised
		MATHLIB vec2 normalised();
		MATHLIB vec2 static normalised(vec2 me);

		// normalise
		MATHLIB void normalise();
		MATHLIB void static normalise(vec2 me);

		//--------------------------------
		// member operators
		//--------------------------------
		MATHLIB vec2 operator+(vec2 other);
		MATHLIB vec2 operator-(vec2 other);
		MATHLIB vec2 operator*(float other);
		MATHLIB vec2 operator/(float other);
		MATHLIB vec2 operator=(vec2 other);
		MATHLIB bool operator==(vec2 other);
		MATHLIB bool operator!=(vec2 other);

		//--------------------------------
		//variables
		//--------------------------------
		union
		{
			struct
			{
				float x;
				float y;
			};
			struct
			{
				float u;
				float v;
			};
			struct
			{
				float data[2];
			};
		};
	};

	//--------------------------------
	// const static 'variables'
	//--------------------------------
	static const vec2 Up(0.f, 1.f);
	static const vec2 Right(1.f, 0.f);

	//--------------------------------
	// non-member operators
	//--------------------------------
	MATHLIB vec2 operator*(float me, vec2 other);
	MATHLIB vec2 operator/(float me, vec2 other);
}
