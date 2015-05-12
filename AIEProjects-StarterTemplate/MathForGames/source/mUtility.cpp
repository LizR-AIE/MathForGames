#include "mUtility.h"

float abs(float a_foo)
{
	if (a_foo < 0)
		return a_foo * -1;
	else
		return a_foo;
	//a_foo < 0 ? (return a_foo * -1) : (return a_foo);
}

float sqrt(float a_foo)
{
	float xhalf = 0.5f * a_foo;
	int i = *(int*)&a_foo;            // store floating-point bits in integer
	i = 0x5f3759df - (i >> 1);    // initial guess for Newton's method
	a_foo = *(float*)&i;              // convert new bits into float
	a_foo = a_foo*(1.5f - xhalf*a_foo*a_foo);     // One round of Newton's method
	return a_foo;
}