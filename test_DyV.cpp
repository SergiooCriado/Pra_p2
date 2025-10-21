#include <iostream>
#include <vector>
#include "DyV.h"
#include <string>
using namespace std;

int main(){
	vector<int> datosNumeros = {1,3,6,9,13};
	int idxNumero = BusquedaBinaria(9, datosNumeros, 0, datosNumeros.size() - 1);
	cout <<"Indice del 9 en datosNumeros: " << idxNumero << endl;

	vector<float> datosDecimales = {1.2f, 2.5f, 3.5f, 7.8f, 10.2f};
	int idxDecimal = BusquedaBinaria(1.2f, datosDecimales, 0, datosDecimales.size() - 1);
	cout << "Indice del 1.2f en datosDecimales: " << idxDecimal << endl;

	vector<string> datosTexto = {"hola", "adios", "chao", "yes"};
	int idxTexto = BusquedaBinaria(string("yes"), datosTexto, 0,datosTexto.size() - 1);
	cout << "Indice de \"yes\" en datosTexto: " << idxTexto << endl;
	
	vector<char> datosCaracteres = {'a', 'b', 'c','d','e'};
	int idxCaracter = BusquedaBinaria('d', datosCaracteres, 0, datosCaracteres.size() - 1);
	cout << "Indice del 'd' en datosCaracteres: " << idxCaracter << endl;
