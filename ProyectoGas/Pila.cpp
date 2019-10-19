#include "Pila.h"
#include "Placa.h"

Pila::Pila()
{
}


Pila::~Pila()
{
}
//Metodo para guardar un valor en la pila
void Pila::Apilar(Placa Numero)
{
	if (Numero.Valor >-1)
	{	Placa  * NodoSig = new Placa();
	NodoSig->Asignar_Valor(Numero.Valor);
	if (Head == nullptr)
	{
		Head = NodoSig;//Asigna la direccion del nodo nuevo
	}
	else
	{
		Placa * Aux = new Placa();
		Aux = Head; //Guardamos el valor que era el head antes,
		Head = NodoSig;
		Head->Siguiente = Aux;
	}
	Elementos++;
}
}

//Función para eliminar un valor en la pila y retorna el valor eliminado
Placa Pila::Desapilar()
{
	if (Head == nullptr)
	{
		return *new Placa;
	}
	else
	{
		Placa Num = *Head;//Guarda el valor en la placa auxiliar Num
		Head = Head->Siguiente; //Cambia la dirección del head para la dirección del siguiente elemento
		Elementos--;
		return Num;
	}
}
