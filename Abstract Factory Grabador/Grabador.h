#ifndef GRABADOR_H
#define GRABADOR_H

#include<iostream>
#include<sstream>
using namespace std;
class Grabador {
protected:
	string code;
	string name;
public:
	Grabador(string code, string name);
	virtual ~Grabador();

	string getCode();
	string getName();

	void setCode(string);
	void setName(string);


	virtual string toString()=0;
};
#endif // !GRABADOR_H