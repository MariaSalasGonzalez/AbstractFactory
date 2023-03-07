#ifndef FABRICAEQUIPOVIEJO_H
#define FABRICAEQUIPOVIEJO_H
#include"FabricaEquipo.h"

class FabricaEquipoViejo :public FabricaEquipo {
public:
	FabricaEquipoViejo();
	virtual ~FabricaEquipoViejo();

	Grabador* crearGrabador();
	Medio* crearMedio();
	Reproductor* crearReproductor();

	string toString();
};

#endif // !FABRICAEQUIPOVIEJO_H


