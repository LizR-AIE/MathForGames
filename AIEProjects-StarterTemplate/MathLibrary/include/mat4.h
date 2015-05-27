#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIB __declspec(dllexport)
#else
#define MATHLIB __declspec(dllimport)
#endif

/*
	TODO:
		row-major right-handed form		
		4-D Matrix (4x4)
		where V is a vector, M is a matrix and f is a float:
		- V = M x V
		- M = M x M
		
		Your matrix objects should support being set up as
		rotation matrices, scale matrices and translation matrices.
		Your vectors and matrices should also have the ability to
		return or cast to an array of float.
*/

namespace LML
{
	class mat4
	{
	public:
		mat4();
		~mat4();
	};

}