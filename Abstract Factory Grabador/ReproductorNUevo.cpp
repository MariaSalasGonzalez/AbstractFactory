#include"ReproductorNUevo.h"

ReproductorNuevo::ReproductorNuevo(string code, string name) :Reproductor(code, name)/*:Grabador()*/
{
	code = code;
	name = name;
}

ReproductorNuevo::~ReproductorNuevo()
{
}

string ReproductorNuevo::toString()
{
	stringstream a;
	a << "----------Reproductor Nuevo------------" << endl
		<< "Codigo:.........\t" << code << endl
		<< "Nombre:.........\t" << name << endl
		<< "----------------------------------" << endl;
	return a.str();
}
