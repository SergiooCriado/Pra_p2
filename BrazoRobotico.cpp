#include "BrazoRobotico.h"
#include <iostream>

using namespace std;

		BrazoRobotico::BrazoRobotico(double xx, double yy, double zz, bool condicion) : x(xx), y(yy), z(zz), sujetando(condicion){}

		double BrazoRobotico::getX(){
			return x;
		}
		double BrazoRobotico::getY(){
			return y;
		}
		double BrazoRobotico::getZ(){
			return z;
		}
		bool BrazoRobotico::getSujetando(){
			return sujetando;
		}
		void BrazoRobotico::coger(){
		sujetando = true;
		}
		void BrazoRobotico::soltar(){
		sujetando = false;
		}
		void BrazoRobotico::mover(double xx, double yy, double zz){
			x = xx;
			y = yy;
			z = zz;
		}
	
