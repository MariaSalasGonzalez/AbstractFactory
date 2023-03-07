#include "Grabador.h"

string Grabador::getCode()
{
    return code;
}

string Grabador::getName()
{
    return name;
}

void Grabador::setCode(string code)
{
    this->code = code;
}

void Grabador::setName(string name)
{
    this->name = name;
} 

Grabador::Grabador(string code, string name):code(code),name(name)
{
}

Grabador::~Grabador()
{
}
