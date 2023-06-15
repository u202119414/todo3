#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;
class Panal
{
private:
	int x;
	int y;
public:
	Panal() { x = 110; y = 10; }
	~Panal() {}
	void Dibujar()
	{
		Console::ForegroundColor = (ConsoleColor)1;

		Console::SetCursorPosition(x, y); cout << char(64);
	}
	void borrar()
	{
		Console::SetCursorPosition(x, y); cout <<" ";

	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}

};

