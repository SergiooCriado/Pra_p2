#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename TipoDato>
int BuscarElemento(TipoDato valorBuscado, const vector<TipoDato>& arreglo, int inicio, int final){
	if(inicio > final){
		return -1;
	}
	int puntoMedio = (inicio + final) / 2;
	if(arreglo[puntoMedio] == valorBuscado){
		return puntoMedio;
	}else if(arreglo[puntoMedio] > valorBuscado){
		return BuscarElemento(valorBuscado, arreglo, inicio, puntoMedio-1);
	}else{
		return BuscarElemento(valorBuscado, arreglo, puntoMedio+1, final);
	}
}

template<typename TipoDato>
int BuscarElemento_DEC(TipoDato valorBuscado, const vector<TipoDato>& arreglo, int inicio, int final){
        if(inicio > final){
                return -1;
        }
        int puntoMedio = (inicio + final) / 2;
        if(arreglo[puntoMedio] == valorBuscado){
                return puntoMedio;
        }else if(arreglo[puntoMedio] < valorBuscado){
                return BuscarElemento_DEC(valorBuscado, arreglo, inicio, puntoMedio-1);
        }else{
                return BuscarElemento_DEC(valorBuscado, arreglo, puntoMedio+1, final);
        }
}

template <typename TipoDato>
int Delimitar(vector <TipoDato>& lista, int inferior, int superior){
	TipoDato elementoPivote = lista[superior];
	int indiceMenor = inferior;
	for(int indiceActual=inferior; indiceActual < superior; indiceActual++){
		if(lista[indiceActual] <= elementoPivote){
			swap(lista[indiceMenor], lista[indiceActual]);
			indiceMenor++;
		}
	}	
	swap(lista[indiceMenor], lista[superior]);
	return indiceMenor;
}

template<typename TipoDato>
void OrdenarRapido(vector <TipoDato>& lista, int inferior, int superior){
        if(inferior < superior){
                int puntoDivision = Delimitar(lista, inferior ,superior);
                OrdenarRapido(lista, inferior, puntoDivision - 1);
                OrdenarRapido(lista, puntoDivision + 1, superior);
        }
}
