#ifndef CINTA_H
#define CINTA_H


#include"Medio.h"

class Cinta : public Medio {
public:
	Cinta(string = " ", string = " ");
	virtual ~Cinta();
	string toString();


};
#endif // !CINTA_H

