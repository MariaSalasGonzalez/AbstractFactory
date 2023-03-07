#ifndef GRABADORVIEJO_H
#define GRABADORVIEJO_H

#include"Grabador.h"

class GrabadorViejo : public Grabador {
public:
	GrabadorViejo(string = " ", string = " ");
	virtual ~GrabadorViejo();
	string toString();


};
#endif // !GRABADORVIEJO_H