#ifndef FABRICAEQUIPO_H
#define FABRICAEQUIPO_H

#include"CD.h"
#include"Reproductor.h"
#include"Grabador.h"
#include"ReproductorNUevo.h"

class FabricaEquipo {
protected:
	Grabador* grab;
	Medio* med;
	Reproductor* repro;
public:
	virtual Grabador* crearGrabador() = 0;
	virtual Medio* crearMedio() = 0;
	virtual Reproductor* crearReproductor() = 0;
	virtual string toString() = 0;
};
#endif // !FABRICAEQUIPO_H


