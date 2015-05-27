#pragma once

#ifdef MATHLIBRARY_EXPORTS
	#define MATHLIB __declspec(dllexport)
#else
	#define MATHLIB __declspec(dllimport)
#endif

namespace LML
{
	class vec2
	{
	public:
		// Constructors/Destructor
		MATHLIB vec2();
		MATHLIB ~vec2() {}

		// Utility

		// operators

		//variables
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
}
