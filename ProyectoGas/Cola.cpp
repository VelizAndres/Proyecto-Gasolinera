#include "Cola.h"
#include "Placa.h"
Cola::Cola()
{
}
Cola::~Cola()
{
}

//Metodo para agregar un número a la cola
void Cola::Agregar_Cola(Placa Numero)
{
	if (Numero.Valor > -1)
	{
		Placa * Nodosig = new Placa();//Crea una placa nueva (nodo)(Valor)
		Nodosig->Asignar_Valor(Numero.Valor); //Se le asigna el valor que se mando
		if (Inicio == nullptr)
		{
			Inicio = Nodosig;
			Fin = Nodosig;
		}
		else
		{
			Fin->Siguiente = Nodosig;
			Fin = Nodosig;
		}
		Elementos++;
	}
}

//Función que elimina el primer número de la cola y lo devuelve
Placa Cola::Retirar_Head()
{
	if (Inicio == nullptr)
	{
		return *new Placa;
	}
	else
	{
		Placa Num = *Inicio; //Se crea una placa auxiliar, se guarda el valor inicio o valor primero de la cola
		Inicio = Inicio->Siguiente; //Se cambia la dirección de memoria del elemento inicio por la del elemento siguiente
		Elementos--;
		return Num;
	}
}