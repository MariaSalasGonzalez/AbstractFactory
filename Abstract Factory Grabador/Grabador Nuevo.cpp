#include "Grabador Nuevo.h"

GrabadorNuevo::GrabadorNuevo(string code, string name) :Grabador(code, name)/*:Grabador()*/
{
	code = code;
	name = name;
}

GrabadorNuevo::~GrabadorNuevo()
{
}

string GrabadorNuevo::toString()
{
	stringstream a;
	a << "----------Grabador Nuevo------------" << endl
		<< "Codigo:.........\t" << getCode() << endl
		<< "Nombre:.........\t" << getName() << endl
		<< "----------------------------------" << endl;
	return a.str();
}
