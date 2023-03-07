#include "Medio.h"

Medio::Medio(string code, string name):code(code),name(name)
{
}

Medio::~Medio()
{
}

string Medio::getCode()
{
    return code;
}

string Medio::getName()
{
    return name;
}

void Medio::setCode(string code)
{
    this->code = code;
}

void Medio::setName(string name)
{
    this->name = name;
}
