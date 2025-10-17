#ifndef DYV_H
#define DYV_H

#include <iostream>
#include <algorithm> 

using namespace std;

template<typename T>
void intercambiar(T v[], int i, int j) {
    T aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

template<typename T>
int Partition(T V[], int ini, int fin) {
    T x = V[fin];
    int i = ini;
    int j;

    for(j = ini; j < fin; j++) {
        if(V[j] <= x) {
            intercambiar(V, i, j);
            i = i + 1;
        }
    }
    
    intercambiar(V, i, fin);
    return i;
}

template<typename T>
void QuickSort(T V[], int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1);
        QuickSort(V, pivot + 1, fin);
    }
}

template<typename T>
int BusquedaBinaria(T& x, T v[], int ini, int fin){
    if(ini > fin){
        return -1;
    }

    int medio = ini + (fin - ini) / 2;

    if(v[medio] == x){
        return medio;
    }
    else if(v[medio] > x){
        return BusquedaBinaria(x, v, ini, medio - 1);
    }
    else{
        return BusquedaBinaria(x, v, medio + 1, fin);
    }
} 

template<typename T>
int BusquedaBinariaInv(T& x, T v[], int ini, int fin){
    if(ini > fin){
        return -1;
    }

    int medio = ini + (fin - ini) / 2;

    if(v[medio] == x){
        return medio;
    }
    else if(v[medio] < x){ 
        return BusquedaBinariaInv(x, v, ini, medio - 1); 
    }
    else{ 
        return BusquedaBinariaInv(x, v, medio + 1, fin); 
    }
}

#endif
