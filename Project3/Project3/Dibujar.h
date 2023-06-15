#pragma once
using namespace std;
using namespace System::Drawing;
 class Dibujar
{private:
	int** matriz;
	int N;
	int* Posx;
	int* Posy;
public:

	Dibujar( int number)
	{
		this->N = number;
		
	}
	
	void Graficar(Graphics^ g) 
	{

		int y = 0;
		int yy = 15 + 7;
		Posx = new int[N];
		Posy = new int[N];
		Font^ mifuente = gcnew Font("Arial Black", 10);
		int x = g->VisibleClipBounds.Width;
		for (int i = 1; i <= N; i++)
		{
			g->DrawString("" + i, mifuente, Brushes::Black, (x / 2) - 4, y);

			y = y + 44;
		}

		
	
	}


};

