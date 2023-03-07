#ifndef INTERFAZ_H
#define INTERFAZ_H


#include"Medio.h"
#include"CD.h"
#include"Cinta.h"

#include"Grabador.h"
#include"Grabador Nuevo.h"
#include"GrabadorViejo.h"

#include"Reproductor.h"
#include"ReproductorNUevo.h"
#include"ReproductorViejo.h"

class Interfaz {//Service class
private:
	static string code;
	static string name;
public:
	static Grabador* crearGrabadorNuevo();
	static Grabador* creandoGrabadorViejo();

	static Medio* crearMedioNuevo();
	static Medio* crearMedioViejo();

	static Reproductor* crearReproductorNuevo();
	static Reproductor* crearReproductorViejo();

	static void solicitarDatos();
};

#endif // !INTERFAZ_H
