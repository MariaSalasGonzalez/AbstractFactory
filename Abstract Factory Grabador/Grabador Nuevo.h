#ifndef GRABADORNUEVO_H
#define GRABADORNUEVO_H


#include"Grabador.h"

class GrabadorNuevo : public Grabador {
public:
	GrabadorNuevo(string = " ", string = " ");
	virtual ~GrabadorNuevo();
	string toString();


};

#endif // !GRABADORNUEVO_H
