#pragma once
class Placa
{
public:
	Placa();
	~Placa();
public:
	//Atributos para la clase Placa 
	Placa * Siguiente=nullptr;
	Placa * Anterior = nullptr;
	int Valor=-1;
public:
	//Metodos para la clase placa
	void Asignar_Valor(int numero);
};

