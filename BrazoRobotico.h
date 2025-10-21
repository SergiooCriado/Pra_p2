#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H
#include <iostream>

        class BrazoRobotico{
                private:
                        double x, y, z;
                        bool sujetando;
                public:
                        BrazoRobotico(double xx, double yy, double zz, bool condicion);
                        double getX();
                        double getY();
                        double getZ();
                        void coger();
                        void soltar();
                        void mover(double xx, double yy, double zz);
			bool getSujetando();
};
#endif
