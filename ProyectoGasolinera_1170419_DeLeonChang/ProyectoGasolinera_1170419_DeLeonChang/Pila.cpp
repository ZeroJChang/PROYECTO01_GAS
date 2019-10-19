#include "pch.h"
#include "Pila.h"

//STACK OVERFLOW
//PROGRAMACION ATS
//TUTORIALES DE PROGRAMACION EXPLICADA 
//COMO SE HACE
//YOUTICS
//DISTINTOS REPOSITORIOS GITHUB

//CATEDRATICO KINAL
//PEDRO ARMAS

//ESTE SOLO NECESITA UN PUNTERO (HACIA DONDE VA)


bool Pila::EstaVacia()
{
	//La pila no puede estar vacia, por lo tanto esto lo verifica
	// El primero sera nulo
	return Primero == nullptr;
}


int Pila::Longitud()
{
	//RECORRERA TODA LA PILA PARA VER OBtener La longitud
	int cantidad = 0;
	Nodo^ Auxiliar;
	Auxiliar = Primero;
	while (Auxiliar->Siguiente != nullptr)
	{
		cantidad++;
		Auxiliar = Auxiliar->Siguiente;
	}
	return cantidad;
}

//ATS / YOUTUBE
int Pila::MostrarEstado(int posicion)
{

	//MUESTRAAAAAA Todos los elementos de la pila
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

//PROGRAMACION ATS
//Agrega elementos 
void Pila::Push(int valor)
{
	Nodo^ NuevoValor = gcnew Nodo;
	NuevoValor->Valor = valor;
	NuevoValor->Siguiente = Primero;
	Primero = NuevoValor;
}


int Pila::Pop()
{
	//LOCOS POR LA INFORMATICA
	//Extraerá el elemento pedido
	if (EstaVacia())
		return -1;

	int ValorRetorno = Primero->Valor;
	Nodo^ Eliminar = Primero;
	Primero = Primero->Siguiente;
	delete Eliminar;
	return ValorRetorno;
}

//Tutoriales de Programacion explicada 
//LLenara la pila desde 0 (la vaciara y luego la llena de 9 a 0
void Pila::OrdenInicial()
{
	
	while (!EstaVacia())
	{
		Pop();
	}
	
	
	for (int i = 10; i >= 0; i--)
	{
		Push(i);
	}
}

//BUSCAR EL NO mayor
int Pila::Mayor()
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
//STACKOVERFLOW
//Busca la posicion de un determinado valor para despues extraerlo
int Pila::Buscar(int valor)
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

//EN ESTA Extrae el digito solicitado por el usuario
int Pila::Digito(int posicion)
{
	// Pila auxiliar para extaer el dato 
	Pila Aux;
	for (int i = 0; i < posicion - 1; i++)
	{
		Aux.Push(Pop());
	}
	int n = Pop();
	for (int i = 0; i < posicion - 1; i++)
	{
		Push(Aux.Pop());
	}
	return n;

}

