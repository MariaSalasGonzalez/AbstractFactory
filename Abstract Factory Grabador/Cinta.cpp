#include "Cinta.h"

Cinta::Cinta(string code, string name) :Medio(code, name) /*:Grabador()*/
{
	code = code;
	name = name;
}

Cinta::~Cinta()
{
}

string Cinta::toString()
{
	stringstream a;
	a << "----------Medio Cinta------------" << endl
		<< "Codigo:.........\t" << code << endl
		<< "Nombre:.........\t" << name << endl
		<< "----------------------------------" << endl;
	return a.str();
}