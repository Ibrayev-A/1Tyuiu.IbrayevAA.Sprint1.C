// Tyuiu.IbrayevAA.Sprint1.Task4.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include "math.h"

// TODO: This is an example of a library function
class Service : public ISprint1Task4
{

	virtual float Vibor(float x, float y)
	{
		//float y;
		if (x > 8 && x != 8)
		{
			y = 1 - 3 * x;
		}
		else if (x <= 1)
		{
			y = x * x - sin(x);
		}
		else
		{
			y = cos(x);
		}
		return y;
	}

};
