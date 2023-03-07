#ifndef REPRODUCTORVIEJO_H
#define REPRODUCTORVIEJO_H
#include"Reproductor.h"

class ReproductorViejo : public Reproductor {
public:
	ReproductorViejo(string = " ", string = " ");
	virtual ~ReproductorViejo();
	string toString();
};
#endif // !REPRODUCTORVIEJO_H