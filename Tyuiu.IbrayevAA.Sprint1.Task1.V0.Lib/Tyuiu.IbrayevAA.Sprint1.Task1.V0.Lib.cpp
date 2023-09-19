// Tyuiu.IbrayevAA.Sprint1.Task1.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp.cpp"
#include <iostream>

// TODO: This is an example of a library function
class Service : public ISprint1Task1
{

	virtual int Logic(int a)
	{
		int v;
		v = a % 10;
		if (v == 7)
		{
			std::cout << " последняя цифра оканчивается на 7" << std::endl;
		}
		else
		{
			std::cout << "последняя цифра не оканчивается на 7" << std::endl;
		}
		return v;
	}
};