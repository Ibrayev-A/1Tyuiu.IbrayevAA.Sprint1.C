// Tyuiu.IbrayevAA.Sprint1.Task0.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint1Task0V00
{
	virtual int Calculate(int a, int b)
	{
		return (a * b);
	}

};
