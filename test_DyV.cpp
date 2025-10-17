#include <iostream>
#include <chrono>    
#include <cstdlib>   
#include <ctime>     

#include "DyV.h" 

using namespace std;

template<typename T>
void imprimirVector(const T V[], int N) {
    cout << "[";
    for (int i = 0; i < N; ++i) {
        cout << V[i] << (i < N - 1 ? ", " : "");
    }
    cout << "]";
}

int main() {
    const int N = 10; 
    int V[N];
    
    srand(time(nullptr)); 
    
    for (int i = 0; i < N; ++i) {
        V[i] = rand() % 100;
    }
    
    cout << "Vector original (" << N << " elementos):\n";
    imprimirVector(V, N);
    cout << "\n\n";
    
    int V_quick[N];
    for (int i = 0; i < N; ++i) {
        V_quick[i] = V[i];
    }
    
    cout << "--- QUICK SORT ---\n";

    auto start = chrono::system_clock::now(); 

    QuickSort(V_quick, 0, N - 1); 

    auto end = chrono::system_clock::now();
    
    chrono::duration<float, milli> duration = end - start; 

    cout << "Vector ordenado con QuickSort:\n";
    imprimirVector(V_quick, N);
    cout << "\n\n";

    cout << "Tiempo de ejecucion (QuickSort): " 
              << duration.count() << " ms\n";
    cout << "-----------------------------------\n";

    return 0;
}
