#include <iostream>
#include <vector>
#include "DyV.h"
#include <string>
using namespace std;

int main(){
	vector<int> datosNumeros = {2, 5, 8, 12, 16};
	int idxNumero = BusquedaBinaria(12, datosNumeros, 0, datosNumeros.size() - 1);
	cout <<"Indice del 12 en datosNumeros: " << idxNumero << endl;

	vector<float> datosDecimales = {0.5f, 1.5f, 2.8f, 5.5f, 9.1f};
	int idxDecimal = BusquedaBinaria(2.8f, datosDecimales, 0, datosDecimales.size() - 1);
	cout << "Indice del 2.8f en datosDecimales: " << idxDecimal << endl;

	vector<string> datosTexto = {"azul", "blanco", "negro", "rojo"};
	int idxTexto = BusquedaBinaria(string("negro"), datosTexto, 0,datosTexto.size() - 1);
	cout << "Indice de \"negro\" en datosTexto: " << idxTexto << endl;
	
	vector<char> datosCaracteres = {'h', 'i', 'j','k','l'};
	int idxCaracter = BusquedaBinaria('j', datosCaracteres, 0, datosCaracteres.size() - 1);
	cout << "Indice del 'j' en datosCaracteres: " << idxCaracter << endl;
	
	vector<int> numerosDesc = {30, 25, 20, 15, 10};
        int idxNumerosDesc = BusquedaBinaria_INV(25, numerosDesc, 0, numerosDesc.size() - 1);
        cout <<"Indice del 25 en numerosDesc: " << idxNumerosDesc << endl;

        vector<float> decimalesDesc = {15.0f, 12.5f, 10.0f, 7.5f, 5.0f};
        int idxDecimalesDesc = BusquedaBinaria_INV(7.5f, decimalesDesc, 0, decimalesDesc.size() - 1);
        cout << "Indice del 7.5f en decimalesDesc: " << idxDecimalesDesc << endl;

        vector<string> textoDesc = {"sandia", "pera", "manzana", "uva"};
        int idxTextoDesc = BusquedaBinaria_INV(string("uva"), textoDesc, 0,textoDesc.size() - 1);
cout << "Indice de \"uva\" en textoDesc: " << idxTextoDesc << endl;

        vector<char> caracteresDesc = {'z', 'y', 'x', 'w', 'v'};
        int idxCaracteresDesc = BusquedaBinaria_INV('y', caracteresDesc, 0, caracteresDesc.size() - 1);
        cout << "Indice del 'y' en caracteresDesc: " << idxCaracteresDesc << endl;



	vector<int> lista_int = {11, 4, 6, 2, 9, 3, 10};
	QuickSort(lista_int, 0, lista_int.size()-1);
	
	vector<float> lista_float = {5.5, 3.3, 1.1, 7.7, 9.9};
	QuickSort(lista_float, 0, lista_float.size()-1);

 	vector<char> lista_char = {'r', 't', 'a', 'b', 's', 'c'};
	QuickSort(lista_char, 0, lista_char.size()-1);
	cout << "Vector ordenado: ";
        for (const char& c : lista_char) cout << c << " ";
        cout << endl;

	vector<string> lista_str = {"moto", "coche", "tren", "avion", "barco"};
	QuickSort(lista_str,0, lista_str.size()-1);
	cout << "Vector ordenado: ";
	for (const string& s : lista_str) cout << s << " ";
	cout << endl;

	return 0;
}
