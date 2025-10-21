#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico b1(0.0, 0.0, 0.0, false);
	cout << "Posicion inicial del brazo: ("
	     << b1.getX() << "," 
	     << b1.getY() << ","
	     << b1.getZ() << "," << ")" << endl;

	cout << "Esta sujetando un objeto? " 
	     << (b1.getSujetando() ? "Si" : "No") << endl;

	b1.mover(2.3,4.5, 7.4);
        cout << "\nEl brazo se ha movido a las coordenadas: ("
             << b1.getX() << ","
             << b1.getY() << ","
             << b1.getZ() << ")" << endl;
	
	b1.coger();
	cout << "Esta sujetando un objeto? "
             << (b1.getSujetando() ? "Si" : "No") << endl;

	b1.soltar();
	cout << "Esta sujetando un objeto? "
             << (b1.getSujetando() ? "Si" : "No") << endl;

	return 0;
}
