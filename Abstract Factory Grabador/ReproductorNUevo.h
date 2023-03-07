#ifndef REPRODUCTORNUEVO_H
#define REPRODUCTORNUEVO_H
#include"Reproductor.h"

class ReproductorNuevo : public Reproductor {
public:
	ReproductorNuevo(string = " ", string = " ");
	virtual ~ReproductorNuevo();
	string toString();


};
#endif // !REPRODUCTORNUEVO_H