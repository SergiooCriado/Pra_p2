#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
	BrazoRobotico robotArm(1.5, 2.5, 3.5, true);
	cout << "Ubicacion actual del mecanismo: ("
	     << robotArm.getX() << "," 
	     << robotArm.getY() << ","
	     << robotArm.getZ() << "," << ")" << endl;

	cout << "Pinza ocupada? " 
	     << (robotArm.getSujetando() ? "Si" : "No") << endl;

	robotArm.mover(8.8, 1.2, 5.0);
        cout << "\nEl mecanismo se ha reubicado a: ("
             << robotArm.getX() << ","
             << robotArm.getY() << ","
             << robotArm.getZ() << ")" << endl;
	
	robotArm.soltar();
	cout << "Pinza ocupada? "
             << (robotArm.getSujetando() ? "Si" : "No") << endl;

	robotArm.coger();
	cout << "Pinza ocupada? "
             << (robotArm.getSujetando() ? "Si" : "No") << endl;

	return 0;
}
