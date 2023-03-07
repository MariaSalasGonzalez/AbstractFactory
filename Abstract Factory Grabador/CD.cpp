#include "CD.h"


CD::CD(string code, string name):Medio(code, name)/*, code(code*/{
	code = code;
	name = name;
}

CD::~CD()
{
}

string CD::toString()
{
	stringstream a;
	a << "---------Medio CD Nuevo--------------------" << endl
		<< "Codigo:.........\t" << code << endl
		<< "Nombre:.........\t" << name << endl
		<< "----------------------------------" << endl;
	return a.str();
}