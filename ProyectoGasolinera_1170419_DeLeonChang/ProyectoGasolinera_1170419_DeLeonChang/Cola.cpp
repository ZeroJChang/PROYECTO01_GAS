#include "pch.h"
#include "Cola.h"




//AYUDA ADICIONAL

//WEB
//STACK OVERFLOW
//DISTINTOS REPOSITORIOS GITHUB
//WIKILIBROS


//TUTORIALES DE YOUTUBE
//TUTORIALES DE PROGRAMACION EXPLICADA 
//PROGRAMACION ATS
//COMO SE HACE
//YOUTICS

//CATEDRATICO KINAL
//PEDRO ARMAS
//ESTE SALE EL PRIMERO K ENTRA



bool Cola::EstaVacia()
{
	//Si la cola esta vacia el valor del utlimo nodo sera null
	return Primero == nullptr;
}

//Tamaño de la Cola
int Cola::Longitud()
{
	int cantidad = 0;
	Nodo^ Auxiliar;
	Auxiliar = Primero;
	while (Auxiliar != nullptr)
	{
		cantidad++;
		Auxiliar = Auxiliar->Siguiente;
	}
	return cantidad;
}

//Muestra los elementos de Toda cola 
int Cola::MostrarEstado(int posicion)
{
	int n = Longitud();
	if (posicion >= 0 && posicion <= n)
	{
		Nodo^ aux = Primero;
		for (int i = 0; i < posicion; i++)
		{
			aux = aux->Siguiente;
		}
		return aux->Valor;
	}
	else
	{
		return 0;
	}
}

//Agrega a la cola 
void Cola::Agregar(int valor)
{
	Nodo^ NuevoValor = gcnew Nodo;
	NuevoValor->Valor = valor;

	if (EstaVacia())
	{
		Ultimo = NuevoValor;
		Primero = NuevoValor;
	}
	else
	{
		Ultimo->Siguiente = NuevoValor;
		Ultimo = NuevoValor;
	}
}

//Extrae los elementos de una cola
int Cola::Extraer()
{
	if (EstaVacia())
	{
		return -1;
	}
	int ValorRetorno = Primero->Valor;
	Nodo^ Eliminar = Primero;
	Primero = Primero->Siguiente;
	delete Eliminar;
	return ValorRetorno;
}

//ESta vacia y luego llena
void Cola::OrdenInicial()
{
	//ESta vacia y luego llena
	while (!EstaVacia())
	{
		Extraer();
	}
	for (int i = 9; i >= 0; i--)
	{
		Agregar(i);
	}
}

//Determina el numero mayor de la cola 
int Cola::Mayor()
{
	Nodo^ aux = Primero;
	int mayor = Primero->Valor;
	if (EstaVacia())
	{
		return 0;
	}
	for (int i = 0; i < Longitud(); i++)
	{
		if (aux->Valor > mayor)
		{
			mayor = aux->Valor;
			aux = aux->Siguiente;
		}
		else
		{
			aux = aux->Siguiente;
		}
	}
	return mayor;
}

//ESTE SIRVE PARA ExTraer;
int Cola::Buscar(int valor)
{
	int cont = 1;
	Nodo^ aux = Primero;
	while (aux != nullptr)
	{
		if (aux->Valor == valor)
		{
			return cont;
		}
		cont++;
		aux = aux->Siguiente;
	}
	return -1;
}


int Cola::Digito(int posicion)
{
	// Extrae lo que le pidan
	Cola Aux;
	int j = Longitud();

	for (int i = 0; i < posicion - 1; i++)
	{
		Aux.Agregar(Extraer());
	}
	int n = Extraer();

	for (int i = 0; i < j - posicion; i++)
	{
		Aux.Agregar(Extraer());
	}
	for (int i = 0; i < j - 1; i++)
	{
		Agregar(Aux.Extraer());
	}

	return n;
}
