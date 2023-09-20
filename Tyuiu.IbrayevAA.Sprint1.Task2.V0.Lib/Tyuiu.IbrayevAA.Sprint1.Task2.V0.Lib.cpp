// Tyuiu.IbrayevAA.Sprint1.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//../Tyuiu.Cours1.cpp/Tyuiu.Cours.cpp.cpp"
#include <iostream>

// TODO: This is an example of a library function
class Service : public ISprint1Task2 
{
	virtual int LogicLong(int a)
	{
		if (a % 10 % 3 == 0)
		{
			std::cout << "последнее число кратно 3" << std::endl;
		}
		else
		{
			std::cout << "последнее число не кратно 3 " << std::endl;
		}
		return a%10;
	}
};