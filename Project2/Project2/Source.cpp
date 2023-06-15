#include "Abeja.h"
#include"Panal.h"
void main() {

	int a = 0;
	int key = 0;
	int* N = new int; 
	*N = 1;
	bool T=false;
	Abeja** arreglo;
	arreglo = new Abeja * [*N];
	Random dado;




	for (int i = 0; i < *N; i++)
	{
		arreglo[i] = new Abeja(dado.Next(0,30),dado.Next(1,16));
	}
	Panal *panal=new Panal();
	
	while (a == 0)
	{

		for (int i = 0; i < *N; i++)
		{

			arreglo[i]->Dibujar();

			arreglo[i]->Borrar();
			if (_kbhit()) {
				key = _getch();
				if (key == 'c')
				{
					T = true;
				}
			}
			arreglo[i]->Moverinicial(T);

		}
		_sleep(10);
		for(int i=0;i<*N;i++)
		{

			if (arreglo[i]->Getx() ==panal->GetX()||panal->GetY() )
			{
				arreglo[i]->Borrar();
				arreglo[i]->~Abeja();
			}
		}
		
	
		panal->Dibujar();
	}
	
	getch();
}