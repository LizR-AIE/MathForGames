#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIB __declspec(dllexport)
#else
#define MATHLIB __declspec(dllimport)
#endif

/*
	TODO:
		This math library must implement the following objects
		using floating-point data in row-major right-handed form:
		- 2-D Vector (2x1)
		- 3-D Vector (3x1)
		- 4-D Vector (4x1)
		- 2-D Matrix (2x2)
		- 3-D Matrix (3x3)
		- 4-D Matrix (4x4)
		Your library must include the following abilities, where V is
		a vector, M is a matrix and f is a float:
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
	class vec3
	{
	public:
		//--------------------------------
		// Constructors/Destructor
		//--------------------------------
		MATHLIB vec3();
		MATHLIB ~vec3(){}

		//--------------------------------
		// Utility
		//--------------------------------
		// up
		// left
		// forward

		// dot product
		// cross product

		// magnitude
		// normalised

		//--------------------------------
		// operators
		//--------------------------------
		// + - *(scalar) /(scalar) = == !=
		vec3 operator=(vec3 other);

		//--------------------------------
		//variables
		//--------------------------------
		union
		{
			struct
			{
				float x;
				float y;
				float z;
			};
			struct
			{
				float r;
				float g;
				float b;
			};
			struct
			{
				float data[3];
			};
		};
	};
}