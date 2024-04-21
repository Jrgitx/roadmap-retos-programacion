#include <iostream>
using namespace std;

//https://cplusplus.com/

//esta es la forma para escribir un comentario en una sola linea

/*
Mientras que de esta forma puedo escribir 
comentarios
en
varias
lineas
*/

//CONSTANTES (NO CAMBIAN)
const int Pi = 3.14; //Para definir una constante se usa const antes del tipo de variable

#define CONSTANTE 0 // otra forma de definir una constante

int main(){
	//variables
	string variable = "('o')";
	
	int a; //entero
	long b; //entero mas grande
	float c; //decimal
	double d; //decimal mas grande
	char e; //caracter
	string f; //cadena de texto
	bool g; //verdadero o falso
	
	//formas de imprimir en c++
	cout << "¡Hola, C++!" << endl;
	printf("¡Hola, C++!");
	
	
	return 0;
}
