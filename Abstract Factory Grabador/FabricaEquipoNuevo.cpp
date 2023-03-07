#include "FabricaEquipoNuevo.h"
#include"Interfaz.h"
FabricaEquipoNuevo::FabricaEquipoNuevo()
{
    grab = crearGrabador();
    med = crearMedio();
    repro = crearReproductor();
}

FabricaEquipoNuevo::~FabricaEquipoNuevo()
{
    if (grab != NULL) delete grab;
    if (med != NULL) delete med;
    if (repro != NULL) delete repro;
}

Grabador* FabricaEquipoNuevo::crearGrabador()
{//serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::crearGrabadorNuevo();
}

Medio* FabricaEquipoNuevo::crearMedio()
{
    //serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::crearMedioNuevo();
}

Reproductor* FabricaEquipoNuevo::crearReproductor()
{
    //serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::crearReproductorNuevo();
}

string FabricaEquipoNuevo::toString()
{
    stringstream a;
    a << grab->toString() << endl
        << med->toString() << endl
        << repro->toString() << endl;
    return a.str();
}
