#ifndef CD_H
#define CD_H
#include"Medio.h"
class CD : public Medio {
public:
	CD(string = " ", string = " ");
	virtual ~CD();
	string toString();


};

#endif // !CD_H




