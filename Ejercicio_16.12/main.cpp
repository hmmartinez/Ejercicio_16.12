//Un pal�ndromo es una cadena(string) que se escribe de la misma forma al
//derecho y al rev�s.Algunos ejemplos de pal�ndromos son �radar� y �Anita lava la tina�.Escriba una funci�n llamada
//probadorPalindromos que utilice el algoritmo reverse en una copia de un objeto string y luego compare el
//objeto string original con el string invertido para determinar si el original es un pal�ndromo o no.Al igual que
//los contenedores de la Biblioteca est�ndar, los objetos string proporcionan funciones como begin y end para obtener
//iteradores que apuntan a caracteres en un objeto string.Suponga que el objeto string original contiene
//todas las letras en min�scula y no contiene signos de puntuaci�n.Use la funci�n probadorPalindromos en un
//programa.

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

bool probadorPalindromos(string);

int main()
{

	string palabra;

	cout << "Escriba una palabra para revisar si es un palindromo: ";
	cin >> palabra;

	if (probadorPalindromos(palabra)) {
		cout << "La palabra es un palindromo.";
	}
	else {
		cout << "La palabra no es un palindromo.";
	}

	_getch();
}

bool probadorPalindromos(string palabra)
{
	return (palabra == string(palabra.rbegin(), palabra.rend()));
}