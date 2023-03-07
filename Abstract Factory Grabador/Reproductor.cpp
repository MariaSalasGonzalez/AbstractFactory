#include "Reproductor.h"

Reproductor::Reproductor(string code, string name):code(code), name(name)
{
}

Reproductor::~Reproductor()
{
}

string Reproductor::getCode()
{
    return code;
}

string Reproductor::getName()
{
    return name;
}

void Reproductor::setCode(string code)
{
    this->code = code;
}

void Reproductor::setName(string name)
{
    this->name = name;
}

