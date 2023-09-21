// Tyuiu.IbrayevAA.Sprint1.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint1Task2
{
	virtual int LogicLong(int a)
	{
		if (a % 2 == 0 && a != 1000 && a%4==0)
		{
			a = a * 2;
		}
		else
		{
			a = a / 5;
		}
		return a;
	}
};