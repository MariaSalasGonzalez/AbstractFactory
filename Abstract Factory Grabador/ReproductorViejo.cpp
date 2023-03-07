#include "ReproductorViejo.h"


ReproductorViejo::ReproductorViejo(string code, string name) :Reproductor(code, name)/*:Grabador()*/
{
	code = code;
	name = name;
}

ReproductorViejo::~ReproductorViejo()
{
}

string ReproductorViejo::toString()
{
	stringstream a;
	a << "----------Reproductor Viejo------------" << endl
		<< "Codigo:.........\t" << code << endl
		<< "Nombre:.........\t" << name << endl
		<< "----------------------------------" << endl;
	return a.str();
}
