#include "Lista.h"
#include "Placa.h"

Lista::Lista()
{
}

Lista::~Lista()
{
}

//Metodo para agregar un número a la lista
void Lista::Agregar(Placa Numero)
{
	Placa * Nodosig = new Placa();
	Nodosig->Asignar_Valor(Numero.Valor);
	if (Cabeza == nullptr)
	{
		Cabeza = Nodosig;
		Cabeza->Anterior = nullptr;
	}
	else
	{
		Placa * PuntSig= new Placa();
		PuntSig = Cabeza;
		if (PuntSig->Siguiente == nullptr)
		{
			PuntSig->Siguiente = Nodosig;
			PuntSig->Siguiente->Anterior = Cabeza;
		}
		else
		{
			do{
				PuntSig = PuntSig->Siguiente;
			} while (PuntSig->Siguiente != nullptr);
			PuntSig->Siguiente = Nodosig;
			PuntSig->Siguiente->Anterior = PuntSig;
		}
	}
	Elementos++;
}

//Funciónes que retornan un valor tipo Placa
//Función que elimina un número en cualquier posición de la lista
Placa Lista::Eliminar(Placa * Eliminar)
{
	if (Cabeza == nullptr)
	{
		return *new Placa;
	}
	else
	{
		Placa * Pos = Cabeza;
		int cant = 0;
		do
		{
			if (cant == 0)
			{
				cant++;
			}
			else
			{
				Pos = Pos->Siguiente;
			}
		} while (Pos->Valor != Eliminar->Valor);

		if (Pos->Siguiente == nullptr && Pos->Anterior == nullptr)
		{
			Placa Aux = *Pos;
			Cabeza = nullptr;
			return Aux;
		}
		if (Pos->Siguiente == nullptr)
		{
			Placa Aux = *Pos;
			Pos->Anterior->Siguiente = nullptr;
			return Aux;
		}
		if (Pos->Anterior == nullptr)
		{
			Placa Aux = *Pos;
			Pos->Siguiente->Anterior = nullptr;
			Cabeza= Pos->Siguiente;
			Elementos--;
			return Aux;
		}
		else
		{
			Placa Aux = *Pos;
			Pos->Anterior->Siguiente = Pos->Siguiente;
			Pos->Siguiente->Anterior = Pos->Anterior;
			Pos->~Placa();
			Elementos--;
			return Aux;
		}
	
	}
}

//Función que elimina el primer número de la lista
Placa Lista::EliminarCabeza()
{
	if (Cabeza == nullptr)
	{
		return *new Placa;
	}
	else
	{
		Placa Envio = *Cabeza;
		if (Cabeza->Siguiente == nullptr)
		{
			Cabeza = nullptr;
			Elementos--;
			return Envio;
		}
		else
		{
			Cabeza->Siguiente->Anterior = nullptr;
			Cabeza = Cabeza->Siguiente;
			Elementos--;
			return Envio;
		}
	}

}



