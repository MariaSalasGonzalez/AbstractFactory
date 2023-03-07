#include "FabricaEquipoViejo.h"
#include"Interfaz.h"

FabricaEquipoViejo::FabricaEquipoViejo()
{
    grab = crearGrabador();
    med = crearMedio();
    repro = crearReproductor();
}

FabricaEquipoViejo::~FabricaEquipoViejo()
{
    if (grab != NULL) delete grab;
    if (med != NULL) delete med;
    if (repro != NULL) delete repro;
}

Grabador* FabricaEquipoViejo::crearGrabador()
{//serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::creandoGrabadorViejo();
}

Medio* FabricaEquipoViejo::crearMedio()
{
    //serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::crearMedioViejo();
}

Reproductor* FabricaEquipoViejo::crearReproductor()
{
    //serie de peticiones para darle valor a los atributos
    //Interfaz
    return Interfaz::crearReproductorViejo();
}

string FabricaEquipoViejo::toString()
{
    stringstream a;
    a << grab->toString() << endl
        << med->toString() << endl
        << repro->toString() << endl;
    return a.str();
}

