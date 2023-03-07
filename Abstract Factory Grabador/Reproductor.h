#ifndef REPRODUCTOR_H
#define REPRODUCTOR_H

#include<iostream>
#include<sstream>
using namespace std;
class Reproductor {
protected:
	string code;
	string name;
public:
	Reproductor(string , string );
	virtual ~Reproductor();

	string getCode();
	string getName();

	void setCode(string);
	void setName(string);


	virtual string toString() = 0;
};
#endif // !REPRODUCTOR_H
