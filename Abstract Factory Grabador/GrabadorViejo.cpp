#include "GrabadorViejo.h"


GrabadorViejo::GrabadorViejo(string code, string name) :Grabador(code, name) /*:Grabador()*/
{
	code = code;
	name = name;
}

GrabadorViejo::~GrabadorViejo()
{
}

string GrabadorViejo::toString()
{
	stringstream a;
	a << "----------Grabador Viejo------------" << endl
		<< "Codigo:.........\t" << code << endl
		<< "Nombre:.........\t" << name << endl
		<< "----------------------------------" << endl;
	return a.str();
}
