#pragma once
#include "Placa.h"

class Lista
{
public:
	Lista();
	~Lista();
public:
	//Atributo para la clase Lista
	int Elementos = 0;
	Placa* Cabeza = nullptr;
	//Metodos y funciones para la clase lista
	void Agregar(Placa Numero);
	Placa Eliminar(Placa * Eliminar);
	Placa EliminarCabeza();
};

