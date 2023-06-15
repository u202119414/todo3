#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class Abeja
{

private:
	int d;
	int x;
	int y;
	int dy;
	int dx;
	int color;
public:

	Abeja(int a, int s)
	{
		
		x = 0;
		y = a;
		dx = 1;
		dy = 1;
		d = s;
	}
	~Abeja()
	{
		
	}
	int Getx()
	{
		return x;
	}
	int Gety()
	{
		return y;
	}
	void Dibujar()
	{
		Console::ForegroundColor=(ConsoleColor)d;
		Console::SetCursorPosition(x, y);   cout << char(254)<<char(219)<<char(177)<<char(254);
	}
	void Borrar()
	{
		Console::SetCursorPosition(x, y);   cout << "        ";
	}
	void Moverinicial(bool T)
	{
		if (T==false)
		{
			Random a;
			dx = a.Next(0, 2);
			dy = a.Next(0, 2);
			if (x + dy > 90 || x + dx < 0)//ancho
			{
				dx = dx * -1;
			}
			if (y + dy > 30 || y + dy < 0)//alto
			{
				dy = dy * -1;
			}
			x = x + dx;
			y = y + dy;
		}
		if (T==true)
		{
			dx = 1;
			if (x + dx > 90) { dx = dx * -1; }

			x = x + dx;
		}
	}
	


};

