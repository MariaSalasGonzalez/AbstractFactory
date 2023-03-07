#ifndef FABRICAEQUIPONUEVO_H
#define FABRICAEQUIPONUEVO_H
#include"FabricaEquipo.h"

class FabricaEquipoNuevo :public FabricaEquipo {
public:
	FabricaEquipoNuevo();
	virtual ~FabricaEquipoNuevo();

	Grabador* crearGrabador();
	Medio* crearMedio();
	Reproductor* crearReproductor();

	string toString();
};
#endif // !FABRICAEQUIPONUEVO_H


